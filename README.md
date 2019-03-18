# 0x10. C - printf

## Description
What you should learn from this project:

* How to use git in a team setting
* Applying variadic functions to a big project
* Understand the complexities of printf

---

### [0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](./_printf.c)
* Write a function that produces output according to format.

### [1. Education is when you read the fine print. Experience is what you get if you don't](./print_nums.c)
* Handle the following conversion specifiers:
  - d : converts input into a base 10 integer
  - i : converts input into an integer

### [2. Just because it's in print doesn't mean it's the gospel]
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

### [5. Nothing in fine print is ever good news]
* Use a local buffer of 1024 chars in order to call write as little as possible.

### [6. My weakness is wearing too much leopard print]
* Handle the following custom conversion specifier:
  - S : prints the string
  - Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

### [7. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print]
* Handle the following conversion specifier:
  - p : int input is converted to a pointer address

### [8. The big print gives and the small print takes away]
* Handle the following flag characters for non-custom conversion specifiers:
  - + :
  - space :
  - \# :

### [9. Sarcasm is lost in print]
* Handle the following length modifiers for non-custom conversion specifiers:
  - l :
  - h :

### [10. Print some money and give it to us for the rain forests]
* Handle the field width for non-custom conversion specifiers.

### [11. The negative is the equivalent of the composer's score, and the print the performance]
* Handle the precision for non-custom conversion specifiers.

### [12. It's depressing when you're still around and your albums are out of print]
* Handle the 0 flag character for non-custom conversion specifiers.

### [13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection]
* Handle the - flag character for non-custom conversion specifiers.

### [14. Print is the sharpest and the strongest weapon of our party]
* Handle the following custom conversion specifier:
  - r : prints the reversed string

### [15. The flood of print has turned reading into a process of gulping rather than savoring]
* Handle the following custom conversion specifier:
  - R : prints the rot13'ed string

### [16. * ]
* All the above options work well together.

--- 

### Authors
* **Tu Vo** - [tuvo1106@gmail.com](https://github.com/tuvo1106)
* **Laura Roudge** - [lauradrc@hotmail.fr](https://github.com/lroudge)
