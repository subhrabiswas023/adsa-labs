# ADSA Labs

A repository for implementation, testing and analysing Advanced Data Structures and Algorithms.

The goal is to implement the problems in C++17 while maintaining the clean separation between the implementation, command-line interface and automated tests

## Project Structure

```text
project-root/
├── include/      # Public headers and algorithm interfaces
├── src/          # Algorithm implementations
├── cli/          # Command-line interfaces
└── tests/        # Automated test suites
```

Each of the questions are organized in the lab directory in each of the utilities in the following way:

```text
├── include/
    ├── lab1
        ├── q1.h
        ├── q2.h
    ├── lab2
        └── q1.h
```

## Getting Started

### Requirements

- C++17-compatible compiler
- CMake
- Catch2 (fetched automatically by CMake)

The programs are required to compile cleanly with:

```bash
g++ -std=C++17 -Wall
```

### Building the Project

Configure the project

```bash
cmake -S . -B build
```

Build the project

```bash
cmake --build build
```

### Running the Test Suite

```bash
ctest --test-dir build --output-on-failure
```

### Executing a CLI Question

```bash
./build/lab1_q1
```
