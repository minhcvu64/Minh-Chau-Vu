#include <iostream>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <functional>
#include <thread>
#include <array>

using namespace std;

size_t getFileContentHash(const string &filePath) {
    std::ifstream t(filePath);
    std::stringstream buffer;
    buffer << t.rdbuf();
    return hash<std::string>{}(buffer.str());
}

void executeDartCode(const string &filePath) {
    std::string command("dart run " + filePath);

    std::array<char, 256> buffer;
    std::string result;

    FILE* pipe = popen(command.c_str(), "r");
    if (!pipe)
    {
        std::cerr << "Couldn't start command." << std::endl;
        return;
    }

    while (fgets(buffer.data(), 256, pipe) != nullptr) {
        result += buffer.data();
    }

    cout << string{buffer.data()} << endl;
    pclose(pipe);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
        return -1;

    if (string{argv[1]} != "-f")
        return -1;

    string filePath{argv[2]};
    size_t fileContentHash = -1;

    for (;;) {
        int newFileContentHash = getFileContentHash(filePath);
        if (newFileContentHash != fileContentHash) {
            // code has changed, re-execute it
            executeDartCode(filePath);
            fileContentHash = newFileContentHash;
        }

        this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}