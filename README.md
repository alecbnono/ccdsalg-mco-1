# Convex Hull using Graham's Scan

This project implements the Graham's Scan algorithm to compute the convex hull of a set of 2D points. It utilizes a stack data structure and two sorting algorithms (one "slow" and one "fast") as per the project specifications. The implementation is in C and adheres to strict requirements for performance and output formatting.

## Features

- **Stack Data Structure**: Implemented with array or linked list (see documentation for details).
- **Two Sorting Algorithms**:
  - "Slow" Algorithm: Bubble Sort
  - "Fast" Algorithm: Merge Sort
- **Two Versions of Graham's Scan**:
  - `graham_scan1.c`: Uses the "slow" sorting algorithm.
  - `graham_scan2.c`: Uses the "fast" sorting algorithm.
- **Modular Code**: Organized into separate source files for stack, sorting, and algorithm logic.
- **Large Input Handling**: Supports up to **32,768 points**.
- **Precision Output**: Coordinates formatted to 6 decimal places.

## Concepts Applied

- Stack Data Structure
- Polar angle-based sorting
- Divide-and-conquer and iterative algorithms
- File I/O
- Performance benchmarking

## Requirements

- GCC
- Make

## Build Instructions

1.  Clone the repository:
    ```
    git clone https://github.com/alecbnono/ccdsalg-mco-1.git
    cd convex-hull-graham-scan
    ```
2.  Compile one or both of fast and slow version:

    ```
    make main1
    make main2
    ```

    This generates two executables:

        main1 (slow version, uses e.g., Bubble Sort)

        main2 (fast version, uses e.g., Merge Sort)

3.  Clean build artifacts (optional):

        make clean # Removes all executables

## Project organization

### / (root)

| Name           | Type        | Function                        |
| -------------- | ----------- | ------------------------------- |
| include        | `Directory` | Component Header (.h) files     |
| inputs         | `Directory` | Input text files                |
| main           | `Directory` | Main C files for the 2 Programs |
| outputs        | `Directory` | Output text files               |
| src            | `Directory` | Component C files of main files |
| &#46;gitignore | `File`      | Github generated file           |
| Makefile       | `File`      | Easy and consistent compilation |

### /src

| Name      | Type   | Function                                     |
| --------- | ------ | -------------------------------------------- |
| compare.c | `File` | Responsible for comparing points for sorting |
| qsort.c   | `File` | Quick sort implementation                    |
| stack.c   | `File` | Stack data structure implementation          |
| ssort.c   | `File` | Selection sort implementation                |
