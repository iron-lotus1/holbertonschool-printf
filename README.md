# printf

### [Description](https://man7.org/linux/man-pages/man3/printf.3.html) - *man7.org*
> *The functions in the printf() family produce output according to a format. The functions printf() write output to stdout.*
All of these functions write the output under the control of a format string that specifies how subsequent arguments or arguments accessed via the variable-length argument facilities of [stdarg(3)](https://man7.org/linux/man-pages/man3/stdarg.3.html) are converted for output.*

```c
printf(const char *format, ...)
```

* printf writes the C string pointed by "<b>format</b>" to a standard output.
* <b>format specification</b> are made up of the percent sign (<b>%</b>)  followed by a coversion operators.

### Coversion Operator
| Character | Argument type; |
| :---      | :---   |
|  **c**  | int; single character, aftrer conversion to unsigned char.|
| **s** | char *; characters from the string are printed until a '\0' is reached or the No. of characters indicated by the precision have been printed |
| **d**   | int; prints a decimal (base 10) |
| **i**   | int; prints integer in base 10 |
|**o**| int; unsigned octal notation (without leading zero, (base 8))|
|**u**| int; unsigned decimal notation|
|**x, X**| int; unsigned hexadecimal notation (base 16)
| **%** | % followed by % will write a single % |
---

> examples
```c
(0) printf("%d\n", 9);
(1) printf("%o\n", 90); // Converts the decimal int, into its octal value (base 8)
(2) printf("%X\n", 90); // Converts unsigned int to uppercase hex (A-F)
(3) printf("%s\n", "Hello, World!"); // Prints the array of characters
```

> output

```c
(0) 9
(1) 132
(2) 5A
(3) Hello, World!
```

### Flags
> Between the % and coversion character, there is an option to include; flags, which modify the specification and a number specifying a minimum field width.

| Flag | effect |
| --- | --- |
| + | number will be printed with a plus sign.|
| 0 | for numeric conversions, specifies padding to the field width with leading zeros|
| - | left justify |
| space | if the first character is not a sign, a space will be prefixed 
---

> examples
```c
(0) printf("%+d\n", 9); // + is placed before a number to output a (+ or -)
(1) printf("%05d\n", 9); // converted value is padded on the left "5 set the width 0 pads the empty space with zero"
(2) printf("%-5d1\n", 9); // converted value is left justified "5 sets the width, 1 is a normal character printed after the number
(3) printf("% d\n", 9); // prints a single space, followed by the number.
(4) printf("%4d\n", 9); // Field Width - 4 Tells the program to use a min width of spaces, in this example it shows 3 spaces followed by 9 being the 4th

```
> output
```c
(0) +9 
(1) 00009
(2) 9    1
(3)  9
(4)   9
```
---
    
