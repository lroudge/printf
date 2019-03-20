# 0x10. C - printf

## Description
This team project is part of the first year curriculum of Holberton School.
_printf replicates the C standard library printf() function.

What you should learn from this project:

* How to use git in a team setting
* Applying variadic functions to a big project
* The complexities of printf
* Managing a lot of files and finding a good workflow

---

## Prototype
```int _printf(const char *format, ...);```

## Usage
* Prints a string to the standard output, according to a given format
* All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command ```gcc -Wall -Werror -Wextra -pedantic *.c```
* Returns the number of characters in the output string on success, -1 otherwise
* Call it this way: ```_printf("format string", arguments...)``` where ```format string``` can contain conversion specifiers and flags,
along with regular characters

## Examples

* ```_printf("Hello, Holberton\n")``` *prints "Hello, Holberton", followed by a new line*
* ```_printf("%s", "Hello")``` *prints "Hello"*
* ```_printf("This is a number: %d", 98)``` *prints "This is a number: 98"*

---

# Tasks

These are all the tasks of this project, the ones that are completed link to the corresponding files.

### [0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](./_printf.c)
* Write a function that produces output according to format.
  - c : converts input into a character
  - s : converts input into a string

### [1. Education is when you read the fine print. Experience is what you get if you don't](./print_nums.c)
* Handle the following conversion specifiers:
  - d : converts input into a base 10 integer
  - i : converts input into an integer

### [2. Just because it's in print doesn't mean it's the gospel](./man_3_printf)
* Create a man page for your function

### [3. With a face like mine, I do better in print](./print_bases.c)
* Handle the following conversion specifiers:
  - b : the unsigned int argument is converted to binary

### [4. What one has not experienced, one will never understand in print](./print_bases.c)
* Handle the following conversion specifiers:
  - u : converts the input into an unsigned integer
  - o : converts the input into an octal number
  - x : converts the input into a hexadecimal number
  - X : converts the input into a hexadecimal number with capital letters

### [5. Nothing in fine print is ever good news](./write_funcs.c)
* Use a local buffer of 1024 chars in order to call write as little as possible.

### [6. My weakness is wearing too much leopard print](./print_custom.c)
* Handle the following custom conversion specifier:
  - S : prints the string
  - Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

### [7. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print](./print_address.c)
* Handle the following conversion specifier:
  - p : int input is converted to a pointer address

### [8. The big print gives and the small print takes away](./get_flag.c)
* Handle the following flag characters for non-custom conversion specifiers:
  - \+ : adds a \+ in front of signed positive numbers and a \- in front of signed negative numbers
  - space : same as \+, but adds a space (is overwritten by \+)
  - \# : adds a 0 in front of octal conversions that don't begin with one, and a 0x or 0X for x or X conversions

### [9. Sarcasm is lost in print]
* Handle the following length modifiers for non-custom conversion specifiers:
  - l : converts d, i, u, o, x, X conversions in short signed or unsigned ints
  - h : converts d, i, u, o, x, X conversions in long signed or unsigned ints

### [10. Print some money and give it to us for the rain forests]
* Handle the field width for non-custom conversion specifiers.

### [11. The negative is the equivalent of the composer's score, and the print the performance]
* Handle the precision for non-custom conversion specifiers.

### [12. It's depressing when you're still around and your albums are out of print]
* Handle the 0 flag character for non-custom conversion specifiers.

### [13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection]
* Handle the - flag character for non-custom conversion specifiers.

### [14. Print is the sharpest and the strongest weapon of our party](./print_custom.c)
* Handle the following custom conversion specifier:
  - r : prints the reversed string

### [15. The flood of print has turned reading into a process of gulping rather than savoring](./print_custom.c)
* Handle the following custom conversion specifier:
  - R : prints the rot13'ed string

### [16. * ]
* All the above options work well together.

---

### Authors
* **Tu Vo** - [tuvo1106@gmail.com](https://github.com/tuvo1106)
* **Laura Roudge** - [laura.derohan@gmail.com](https://github.com/lroudge)
