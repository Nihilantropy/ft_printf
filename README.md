### Installation

You can git clone the repository using https protocol

```
git clone https://github.com/Nihilantropy/ft_printf.git
```

then you can access the directory and run the make command

```bash
cd ft_printf && make
```

Now you have your ft_printf library :library:! To use it you only have to add the `ft_printf.h` (inside the `include` folder) into your program header!
Once you've done that, you can compile your fresh new program with the
`-L/path/to/libft_printf.a` (change accordingly) and the `-lft_printf` flag :flag:!
Now that you know how to use it... let's make it!

# ft_printf 🛠️

Welcome to the world of `ft_printf`! 🎉 This project is all about recoding the legendary `printf` function from the C library. If you’ve ever wondered how `printf` works under the hood or wanted to take your C skills to the next level, this is your chance!


## 📜 Project Overview

The aim of this project is to create your very own version of `printf()`, a function that’s as versatile as it is essential in C programming. You'll dive into the world of variadic functions and discover how to format and print output in various ways.

## 🎯 Mandatory Part

### What You Need to Do

- **Function Prototype:** `int ft_printf(const char *format, ...);`
- **Handle These Conversions:**
  - `%c` - Print a character.
  - `%s` - Print a string.
  - `%p` - Print a pointer in hexadecimal format.
  - `%d` - Print a decimal number.
  - `%i` - Print an integer.
  - `%u` - Print an unsigned decimal number.
  - `%x` - Print a number in lowercase hexadecimal.
  - `%X` - Print a number in uppercase hexadecimal.
  - `%%` - Print a percent sign.
- **External Functions Allowed:** `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`
- **Library Creation:** Use `ar` to make your library (`libftprintf.a`) and keep it in the root of your repo.

### What to Keep in Mind

- Skip the buffer management of the original `printf()`. Focus on making your function work flawlessly with the given format specifiers.
- Make sure your implementation is robust and handles errors gracefully.

## 🎁 Bonus Part

Feeling adventurous? Try out these bonus features to make your `ft_printf` even cooler:

- **Flag Management:** Implement flags like `-`, `0`, `.`, and handle minimum field widths.
- **Additional Flags:** Add support for `#` and `+`.

**Note:** The bonus features will only be reviewed if your mandatory part is spot on—no pressure! 😉

## 🛠️ Common Instructions

- **Language:** C
- **Norm Compliance:** Follow the 42 Norm to the letter. This applies to both mandatory and bonus parts.
- **Error Handling:** No segfaults or memory leaks allowed! Ensure your code runs smoothly.
- **Makefile Must-Haves:**
  - Include rules for `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
  - Avoid unnecessary relinking in the `bonus` rule.
- **Libft Integration:** If you’re using `libft`, make sure to include it in a `libft` directory and compile it first.

## 🚀 Submission

Once you’re done, submit your work to your Git repository. Double-check that all files are correctly named and included. Your project will be graded based on what’s in the repo, so make sure everything is in tip-top shape!

Congratulations! With `ft_printf` added to your toolkit, you’re one step closer to mastering C programming. 🎉💻
