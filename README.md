# Minh-Chau-Vu
Dart learning
## Summary for video 01
- This course is only about darts as a programming language or not going to blend in flutter.
- Dart is like any other programming language like JavaScript of Python.
- The course will be more straightforward if you know a few programming languages before because the course will not go into the basics but only outline the differences between Dart from other programming languages.

## Summary for video 02
- Use GitHub or basically have a place to storage our code.
- How to creat a new repository in GitHub.
- Using dependency (fswatch) : third-party dependency which install on computer by using "brew install fswatch".
- Fswatch is one of the key components that we are about using in this course.

## Summary of video 03
- How to creat a Dart project from the terminal : dart creat -t console project name.
- To run your code in VS: dart bin/projectname.dart
- To rerun your code when the code changes : which fswatch
- Ask fswatch monitor changes in bin folder: fswatch -o bin/ | xargs -n1 -I{} sh -c'clear; dart bin/projectname.dart'
- Constant(Cost):
  -  Definition: Const is data that you can specify while you're writing your code, held inside the memory for instance th Heap or Stack.
  -  Can not change the value after created.
  -  Can not assign a new value.
  -  Can not remove from an unmodifiable list ( can not remove by index).
- Final:
  - Not allow any any modification to value itself.
  - Prevent re-assigning the variable to a new value
- The difference between Const and Final:
  - Const can't be assigned a new avalue after its creation and its internal value can't be changed either.
  - Final can't be assigned a new value but its internal value can be changed.
  - Const values can be assigned to final values but not the other way around. 
- Var variable:
  - Can re-assigned a new value and its internal value can change as well.
- Late variable:
  - Intialized only when they're used.
- Data types: double, int, String..
- Variable names : begin with a lowercase and after that Upper case for the first letter of each word.

## Summary of video 4:
