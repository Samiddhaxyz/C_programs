
🧮 A Simple C Calculator

This is a very simple and basic calculator in C comprising of the if-else ladder logic in the C programming language. Also, this is my very first project in C! 🚀

📋 Overview


1. Functionality: The program takes two numbers and an operator from the user, then performs addition, subtraction, multiplication, or division accordingly.
2. Concepts used: Variables, user input with scanf, char handling, and conditional logic using an if-else ladder (including a nested if-else for division).
3. Goal: To practice the fundamentals of C — taking input, making decisions with conditionals, and printing formatted output.


🛠️ How It Works


1. The program asks the user to enter the first number, the second number, and an operator (+, -, *, or /).
2. An if-else ladder checks which operator was entered and performs the matching calculation.
3. For division specifically, a nested if-else checks whether the second number is 0 before dividing, to avoid a crash.
4. If the operator entered doesn't match any of the four, the program prints an "invalid operator" message instead of guessing.
5. The result is printed to the screen.


▶️ How to Run

gcc Calculator.c -o calculator
./calculator

(On Windows, you can compile with gcc Calculator.c -o calculator.exe and run calculator.exe)

✅ Handled Edge Cases


1. Division by zero: Checked explicitly before dividing — prints an error message instead of crashing.
2. Invalid operator: Any character other than +, -, *, / falls into a final else, printing "invalid operator" instead of silently doing nothing.


🚧 Known Limitations


1. No validation on the numbers themselves — entering a letter instead of a number when prompted will cause unexpected 2. behavior (this is a scanf input-buffer issue).
3. Uses int for both inputs, so division always truncates to a whole number (e.g. 7 / 2 gives 3, not 3.5).


📚 What I Learned


1* How to take multiple inputs of different types (int and char) from the user with scanf.
2* The " %c" trick — the leading space before %c skips any leftover whitespace/newline in the input buffer from the  previous scanf, so the operator is read correctly.
3* How to nest an if-else inside another if-else branch to handle a special case (division by zero) without disturbing the rest of the logic.


🔮 Future Improvements


1. Add validation for non-numeric input (currently only the operator character is safely checked).
2. Switch to float/double for the numbers to allow decimal results.
3. Refactor the operator check into a switch statement for comparison/practice.

***Created by Samiddha Ganguly****
<br>
***Note - This is a very beginner-friendly project. Feedbacks are welcomed!! 
