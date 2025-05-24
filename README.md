# Convex Hull using Graham's Scan

This project implements the Graham's Scan algorithm to compute the convex hull of a set of 2D points. It utilizes a stack data structure and two sorting algorithms (one "slow" and one "fast") as per the project specifications. The implementation is in C and adheres to strict requirements for performance and output formatting.

## Features

- **Stack Data Structure**: Implemented with array or linked list (see documentation for details).
- **Two Sorting Algorithms**:
  - "Slow" Algorithm: [Replace with your chosen algorithm, e.g., Bubble Sort]
  - "Fast" Algorithm: [Replace with your chosen algorithm, e.g., Merge Sort]
- **Two Versions of Graham's Scan**:
  - `graham_scan1.c`: Uses the "slow" sorting algorithm.
  - `graham_scan2.c`: Uses the "fast" sorting algorithm.
- **Modular Code**: Organized into separate source files for stack, sorting, and algorithm logic.
- **Large Input Handling**: Supports up to **32,768 points**.
- **Precision Output**: Coordinates formatted to 6 decimal places.

## 🧠 Concepts Applied

- Stack Data Structure
- Polar angle-based sorting
- Divide-and-conquer and iterative algorithms
- File I/O
- Performance benchmarking

## Requirements

- C Compiler (e.g., `gcc`)
- Make

## Build Instructions

1.  Clone the repository:
    ```
    git clone https://github.com/alecbnono/ccdsalg-mco-1.git
    cd convex-hull-graham-scan
    ```
2.  Compile the project:

    ```
    make
    ```

    This generates two executables:

        main1 (slow version, uses e.g., Bubble Sort)

        main2 (fast version, uses e.g., Merge Sort)

Clean build artifacts (optional):

    make clean  # Removes all .o files and executables
