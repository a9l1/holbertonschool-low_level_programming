# Simple Calculator

A terminal-based interactive calculator written in C.

## Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run

./calculator

## Supported Operations

- Addition
- Subtraction
- Multiplication
- Division

## Numeric Behavior

The calculator uses double-precision floating-point numbers.

Both integer and decimal operands are supported.

Results are displayed using the %g format.

## Known Limitations

- Division by zero is rejected.
- Menu options must be integers from 0 to 4.
- Non-numeric input is not handled robustly.
- Floating-point results may have rounding limitations.
- Very large values and non-finite results are not specifically handled.
