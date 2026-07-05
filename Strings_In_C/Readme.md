# 🧵 Custom String Function Toolkit

A menu-driven C program that reimplements three standard C string library functions (`strlen`, `strcpy`, `strcmp`) from scratch using pointers, and lets the user try them out interactively.

## 📋 Overview

- **Functionality:** The program presents a menu where the user can pick an operation — get a string's length, copy a string, or compare two strings — and see the result using custom-built versions of these functions rather than the standard library's.
- **Concepts used:** Pointers, pointer arithmetic, arrays, array decay, function return values, `scanf()`/`printf()`, and `if-else` branching driven by user menu choices.
- **Goal:** To understand how core C string functions actually work under the hood by rebuilding them character-by-character, instead of just calling the built-in versions.

## 🛠️ How It Works

1. The program shows a menu with four options and asks the user to enter a string, followed by an operation number.
2. Based on the number chosen, it calls one of three custom functions:
   - **`My_strlen`** — walks through the string one character at a time using a counter, until it hits the null terminator (`'\0'`), and returns the count.
   - **`My_strcopy`** — uses two pointers to copy each character from the source string into a destination array, one at a time, until the null terminator is reached, then adds the terminator to the copy.
   - **`My_strcmp`** — walks two strings in parallel using two pointers, advancing both when characters match. If it finds a mismatch, it returns the numeric difference between the two differing characters; if both strings end without any mismatch, it returns `0`.
3. Option 4 lets the user exit the loop and end the program.
4. The loop repeats, letting the user try multiple operations in the same run.

## ▶️ How to Run

```bash
gcc string_toolkit.c -o string_toolkit
./string_toolkit
```

(On Windows, you can compile with `gcc string_toolkit.c -o string_toolkit.exe` and run `string_toolkit.exe`)

## 📚 What I Learned

- How array decay works in practice — passing arrays into functions and using them in `scanf` without needing `&`, since the array name already represents the address of its first element.
- The difference between `return` (silently hands back a value and exits the function immediately) and `printf` (only displays output, doesn't exit or return anything) — a mixup that caused several bugs during development, including an infinite loop.
- Why a function needs to remember its *starting* pointer position (like `My_strcopy`'s `start` pointer) before advancing it in a loop, so it can return the correct beginning address rather than wherever the pointer ended up.
- How to structure a multi-function, menu-driven program using `if-else if` branching tied to user input, instead of writing single-purpose scripts.

## 🚧 Known Limitations

- No input validation — entering a number outside 1–4 for the operation choice is silently ignored rather than flagged as invalid.
- Fixed-size buffers (`user_string[100]`, `destination[20]`) have no bounds checking — a string longer than the buffer can overflow it.
- No handling for non-numeric input in `operation_number` (a known, unresolved issue carried over from earlier projects).

## 🔮 Future Improvements

- Add input validation for the menu choice and guard against non-numeric input.
- Add bounds checking in `My_strcopy` to prevent buffer overflows.
- Move the menu instructions outside the loop so they only print once instead of every round.

---

**Created by Samiddha Ganguly**
This is a beginner-to-intermediate project. Feedback is welcomed!
