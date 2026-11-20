
# Simple Calculator

A terminal-based interactive calculator written in C.

## Compilation

Compile the program using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

## Run

Run the calculator using:

```bash
./calculator
```

## Supported Operations

The calculator supports four arithmetic operations:

1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)

Enter 0 to quit the program.

## Numeric Behavior

- The calculator uses `double` for numeric operands.
- Both integers and decimal numbers are supported.
- Results are displayed using the `%g` format.
- Floating-point calculations may have rounding limitations.
- Division by zero is rejected with an error message.

## Input Validation

- Menu choices must be integers between 0 and 4.
- Invalid menu choices display `Invalid choice`.
- Non-numeric menu input is detected and discarded.
- Invalid numeric operands display `Invalid number`.
- The program asks for the number again after invalid input.
- The calculator continues running until the user chooses 0 or input ends.

## Known Limitations

- Mixed inputs such as `1abc` may be partially accepted by `scanf`.
- Non-finite floating-point values such as infinity and NaN are not explicitly rejected.
- Extremely large numeric values are not specifically handled.
- Floating-point arithmetic may produce rounding errors.
- Input validation handles basic invalid tokens but does not guarantee rejection of all malformed input.

## Project Structure

- `calculator.c` - Main calculator program.
- `README.md` - Project documentation.

## Compiler Requirements

The program must compile with GCC using the following flags:

- `-Wall`
- `-Werror`
- `-Wextra`
- `-pedantic`
- `-std=gnu89`

