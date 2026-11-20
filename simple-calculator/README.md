# Simple Calculator

A terminal-based calculator written in C.

## Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run

./calculator

## Supported Operations

The calculator is planned to support:
- Addition
- Subtraction
- Multiplication
- Division

## Numeric Behavior

This initial version reads integer menu choices.
Numeric operand support will be added in later tasks.

## Known Limitations

- Arithmetic operations are not implemented yet.
- Only option 0 exits the program.
- Non-numeric menu input is not fully handled.
