# C - Printf Projet

## Description

The objective of this project is to create our own printf function in the C language. The printf function is commonly used to display formatted text during program execution. The goal of this project is to delve into the mechanics of the standard printf function in the C library and gain a deeper understanding of its functionality.

## Compilation

To compile your code, you should use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```


## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the specified options.
- All files should end with a new line.
- A README.md file, at the root of the folder of the project, is mandatory.
- Your code should follow the Betty style, checked using betty-style.pl and betty-doc.pl.
- Avoid using global variables.
- Limit the number of functions per file to no more than 5.
- The prototypes of all functions should be included in a header file named main.h.
- Don’t forget to push your header file and make sure it's include guarded.
- Do not provide the _putchar function for this project.
- There should be one project repository per group. Cloning, forking, or duplicating a project repository with the same name before the deadline risks a 0% score.

- Authorized functions and macros:
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

## Mandatory Task

- Task 0
Write a function that produces output according to a format and the following conversion specifiers c, s, and %.
- Task 1
Handle the following conversion specifiers d, i.
- Task 2
Create a man page for your function.

## Examples
### Character
```
#include "main.h"
_printf("%c", 'H');
```
#### Output
```
"H"
```
### String
```
#include "main.h"
_printf("%s", "I am a string !");
```
#### Output
```
"I am a string !"
```
### Decimal and integer
```
#include "main.h"
int len = 1;
_printf("Length:%d, %i\n", len, len);
```
#### Output
```
"Length:1, 1"
```

## Man 3 printf
if you want to see more details of the functions printf, [click here](https://github.com/MatthieuGrauleau/holbertonschool-printf/blob/main/man_3_printf) .

## Flowchart of the function _printf
![flowchart](https://github.com/MatthieuGrauleau/holbertonschool-printf/blob/main/flowchart.png)
## Authors
This project was made by :
* <[Matthieu Grauleau](https://github.com/MatthieuGrauleau)>

## License

MIT License Copyright (c) 2021 Othneil Drew Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions: The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software. THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.