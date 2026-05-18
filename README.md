# C-EXERCISES

C programming exercises covering pointers, arrays, recursion, iteration and functions - university assignments

> ⚠️ **Note:** This project was developed for academic purposes and some output messages are written in **Portuguese**.

---

**Name of the repository:** C Exercises

🎓 **Context:**

A collection of C programming exercises developed during the Programming Fundamentals module. Topics covered include memory addresses, pointers, array searching, recursive vs iterative approaches, and functions with and without parameters.

📄 **Files:**

**print-variables-addresses.c:** Prints the value and memory address of `int` and `char` variables using `printf` and the address-of operator (`&`)

**pointer-basics.c:** Declares a pointer `*p`, assigns it to a variable `num`, and manipulates the value through the pointer, demonstrates pointer assignment and dereferencing

**array-search.c:** Function `encontra()` that searches for a value in an integer array using pointer arithmetic and returns the index, or `-1` if not found

**factorial-recursive.c:** Recursive function `fat()` that calculates the factorial of a given integer N using the base case `fat(0) = 1`

**sum-recursive.c:** Recursive function `soma()` that calculates the sum of all integers from 0 to N using recursion

**sum-iterative.c:** Iterative version of the sum function using a `for` loop, computes the same result as `sum-recursive.c` for comparison

**circumference-pi-function.c:** Function `pi()` that returns 3.14 and is used to calculate the circumference with a fixed radius of 1.0

**circumference-with-param.c:** Function `circunferencia(raio)` that receives the radius as a parameter and returns the calculated circumference, demonstrates functions with float parameters and return values

**print-numbers-fixed.c:** Void function `num()` with no parameters that uses a `for` loop to print numbers up to 100

**print-numbers-range.c:** Void function `num(a, b)` that receives start and end values from the user via `scanf` and prints all integers in that range

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

- Circumference calculation with fixed and parameterized functions ○

- Number printing with fixed range and user-defined range 📊

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
