# C Language Learning Repository

This repository contains my personal C language learning journey, covering fundamental concepts and features.

## Table of Contents

- [Introduction](#introduction)
- [Directory Structure](#directory-structure)
- [How to Compile and Run](#how-to-compile-and-run)
- [Code Examples](#code-examples)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This repository serves as a collection of my explorations and learning exercises in the C programming language. It's organized by topics, each in its own directory, as well as a few files in the root of the repository.

## Directory Structure

The repository is structured as follows:

*   **`01_HelloWorld/`**: Contains code for basic "Hello, World!" programs, likely the starting point.
*   **`02_Variables/`**: Examples and code related to the use of variables in C.
*   **`03_PrimitiveDataTypesSizes/`**: Demonstrates the sizes of different primitive data types.
*  **`04_FormatStrings/`**: Code related to formatted string output.
*   **`05_EscapeSequences/`**: Examples and usage of escape sequences in C.
*   **`06_Constants/`**: Code covering the use of constants in C.
*   **`07_Operators/`**:  Examples of using various operators.
*   **`08_TypeConversion/`**: Code that covers type conversions and casting.
*   **`09_ControlFlow/`**: Explores control flow constructs such as if, else, for loops, while loops etc.
*  **`10_Functions/`**:  Examples related to functions
*  **`11_Arrays/`**: Covers the use of arrays.
*  **`12_StructsAndUnions/`**: Code implementing Structs and Unions.
*  **`13_Typedefs/`**: Examples of using Typedefs.
*   **`14_Pointers/`**: Code demonstrating pointers and their usage.
*   **`15_VariableNumberOfArguments/`**: Examples of functions with variable arguments.
*   **`16_ConditionalCompilation/`**: Explores the use of conditional compilation directives.
*   **`17_GotoStatement/`**: Code implementing the goto statement (exercise caution with this!).
*   **`color.c`**: A C source file likely containing some color related code.
*   **`.gitignore`**: Configuration file for Git, specifying which files or directories should not be tracked.
*   **`README.md`**: This file, providing information about the repository.

## How to Compile and Run

The C code can be compiled using a C compiler like `gcc` or `clang`.

**General Compilation Instructions:**

1.  Navigate to the directory containing the `.c` file you want to compile, using your terminal or command prompt.
2.  Use the following command to compile:
    ```bash
    gcc <filename>.c -o <output_executable>
    ```
    -   Replace `<filename>.c` with the name of your C source file.
    -   Replace `<output_executable>` with the desired name for the executable. For example, you might use `gcc my_program.c -o my_program`.
3.  To run the compiled program, execute:
    ```bash
    ./<output_executable>
    ```
    -   Replace `<output_executable>` with the name you gave the executable in step 2.  For instance `./my_program`

**Example Compilation:**

To compile a C source file in the `02_Variables` directory, for instance `variable_example.c` , to an executable named `variable_example`, you would use:
```bash
cd 02_Variables
gcc variable_example.c -o variable_example
./variable_example
