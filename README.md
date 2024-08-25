# ft_printf

## Introduction

`ft_printf` is a custom implementation of the standard C library function `printf`. This project aims to deepen your understanding of variadic functions in C and enhance your programming skills. By recreating `printf`, you will gain insight into handling variable arguments and managing formatted output.

## Project Description

The goal of this project is to recode `printf()`, a function widely used for formatted output in C. The `ft_printf` function you will implement should handle various format specifiers and be comparable to the original `printf` in functionality.

## Mandatory Part

### Requirements

- **Function Prototype:** `int ft_printf(const char *format, ...);`
- **Conversion Specifiers to Handle:**
  - `%c` - Print a single character.
  - `%s` - Print a string.
  - `%p` - Print a pointer in hexadecimal format.
  - `%d` - Print a decimal number.
  - `%i` - Print an integer in base 10.
  - `%u` - Print an unsigned decimal number.
  - `%x` - Print a number in lowercase hexadecimal format.
  - `%X` - Print a number in uppercase hexadecimal format.
  - `%%` - Print a percent sign.
- **External Functions Allowed:** `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`
- **Library Creation:** Use `ar` to create the library (`libftprintf.a`).

### Implementation Notes

- Avoid implementing buffer management as done in the original `printf()`.
- Ensure that your function adheres to the specified conversion formats and handles errors appropriately.
- Your library should be created at the root of your repository.

## Bonus Part

While the bonus part is optional, it adds advanced features to your `ft_printf` implementation:

- **Flags Management:** Handle flags such as `-`, `0`, `.`, and minimum field width for conversions.
- **Additional Flags:** Support `#` and `+` flags.

**Note:** Bonus features will only be evaluated if the mandatory part of the project is fully functional and error-free.

## Common Instructions

- **Language:** C
- **Norm Compliance:** Ensure all code adheres to the 42 Norm. Bonus files/functions are also subject to Norm checks.
- **Error Handling:** Prevent unexpected quits such as segmentation faults or memory leaks.
- **Makefile Requirements:**
  - Include rules for `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
  - Avoid relinking during the `bonus` rule.
- **Libft Integration:** If using `libft`, include its sources and Makefile in a `libft` directory and compile it before the project.

## Submission

Submit your project to the assigned Git repository. Ensure all files are correctly named and included in the repository. The submitted work will be evaluated based on the repository contents. 

Once completed and passed, you can integrate `ft_printf` into your `libft` for use in future C projects.
