# C-EXERCISES
C programming exercises covering pointers, arrays, recursion and iteration — university assignments

---

**Name of the repository:** C Exercises

> ⚠️ **Note:** This project was developed for academic purposes and some output messages are written in **Portuguese**.

🎓 **Context:**

A collection of C programming exercises developed during the Programming Fundamentals module. Topics covered include memory addresses, pointers, array searching, and recursive vs iterative approaches.

📄 **Files:**

**print-variables-addresses.c:** Prints the value and memory address of `int` and `char` variables using `printf` and the address-of operator (`&`)

**pointer-basics.c:** Declares a pointer `*p`, assigns it to a variable `num`, and manipulates the value through the pointer — demonstrates pointer assignment and dereferencing

**array-search.c:** Function `encontra()` that searches for a value in an integer array using pointer arithmetic and returns the index, or `-1` if not found

**factorial-recursive.c:** Recursive function `fat()` that calculates the factorial of a given integer N using the base case `fat(0) = 1`

**sum-recursive.c:** Recursive function `soma()` that calculates the sum of all integers from 0 to N

**sum-iterative.c:** Iterative version of the sum function using a `for` loop — computes the same result as `sum-recursive.c` for comparison

🛠️ **Tech Stack:**

- C (C99)
- Standard libraries: `stdio.h`, `stdlib.h`, `locale.h`
- Compiled with GCC (MinGW on Windows)

🎖️ **Features:**

- Memory address inspection with `&` operator 📍

- Pointer declaration, assignment and dereferencing 🔗

- Array search with pointer arithmetic 🔍

- Factorial via recursion 🔢

- Sum via recursion and via iteration ↔️

---

🖥️ **How to Run**

**Requirements:**

- GCC compiler (e.g. [MinGW](https://www.mingw-w64.org/) on Windows or `gcc` on Linux/macOS)

**Instructions:** 💾

1. Download: Click on Code → Download ZIP
2. Extract: Unzip the file C-EXERCISES-main.zip
3. Open a terminal in the project folder
4. Compile the desired file:
   ```bash
   gcc filename.c -o output
   ```
5. Run the compiled program:
   ```bash
   ./output
   ```
