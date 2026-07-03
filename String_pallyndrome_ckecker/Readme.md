# 🔁 A Basic Program For Palindrome Checker (String)

A simple, basic program that checks whether a string is a palindrome or not.

## 📋 Overview

- **Functionality:** The program takes a string from the user, reverses it using pointers, and then checks whether the reversed string matches the original — if it does, the string is a palindrome.
- **Concepts used:** Pointers, pointer arithmetic, arrays, string functions (`strcpy`, `strlen`, `strcmp`), and `scanf()` / `printf()` for input and output.
- **Goal:** To practice pointers, arrays, and pointer arithmetic — specifically the two-pointer technique.

## 🛠️ How It Works

1. The program takes a string input from the user and stores a copy of the original before doing any reversal.
2. Two pointers are set up: one (`point`) starts at the beginning of the string, and the other (`point2`) starts at the end (calculated using `strlen`).
3. A `swap` function exchanges the characters at these two pointer positions. In a `while` loop, the pointers move toward each other — `point` moves forward, `point2` moves backward — swapping pairs of characters each step, until they meet in the middle. This fully reverses the string in place.
4. The reversed string is compared against the saved original copy using `strcmp`.
5. If they match, the program reports that the string is a palindrome; otherwise, it reports that it is not.

## 📚 Learning Outcomes

- Learned how to use two pointers moving toward each other (the "two-pointer technique") to reverse a string in place, without needing a second array.
- Practiced pointer arithmetic — using `mystr + len - 1` to jump straight to the last character's address.
- Learned how `strcpy`, `strlen`, and `strcmp` work together to preserve, measure, and compare strings.
- Reinforced how passing pointers into a function (`swap`) lets the function modify the original array directly, instead of working on a copy.

## ▶️ How to Run

```bash
gcc Palindrome_checker.c -o palindrome_check
./palindrome_check
```

## 🚧 Known Limitations

- The input buffer (`mystr[20]`) is a fixed size — entering a string longer than 19 characters will overflow the buffer.
- `scanf("%s", ...)` stops reading at the first whitespace, so multi-word phrases (like "A man a plan a canal Panama") won't be read as a single string.

---

**Created by Samiddha Ganguly**
This is a beginner-friendly project. Feedback is welcomed!
