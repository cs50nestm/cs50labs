# Data Types

## What is a Data Type?

A data type, in programming, is a classification that specifies which type of value a variable can hold. A `string` can hold only textual data, while an `int` can only hold a whole number.

Some of the data types you will use in CS50AP are native data types, meaning they are built into the C language, and others are made available to you in the CS50 Library, which you can use by typing

```
#include <cs50.h>
```

at the top of your program.

The C programming language is a statically-typed language. It requires that you specify the data type of a variable when you declare it. The data type in fact determines the storage format for that variable. 

{% next %}

## Native Data Types

Let's start with the data types you will use most frequently.

### int

An `int` is a data type which represents an integer: its value could be a positive or negative whole number, or zero. Numbers like 5, 28, -3, and 0 can be represented as ints, but numbers like 2.8, 5.124, and -8.6 cannot. 

When an `int` is declared, the computer allocates 4 bytes, or 32 bits worth of space for that variable. This means that there are 2<sup>32</sup> (more than 4 billion) possible integers that can be represented as an `int`. Since this includes both positive numbers, negative numbers and zero, the values that an `int` can hold range from -2<sup>31</sup> to (2<sup>31</sup> - 1).

The CS50 user input function for an `int` would be `get_int`. To declare a new int and ask for input we could write

```c
int age = get_int("Enter your age: );
```

### long long

A `long long` is similar to an `int`, except that it uses 8 bytes, or 64 bits, of storage, allowing numbers in the range from -2<sup>63</sup> to (2<sup>63</sup> - 1).

The user input function for a `long long` would be `get_long_long`. Example code would look like

```c
long long ccn = get_long_long("Enter a credit card number: ");
```

### float

To store numbers that are not whole numbers, C uses a data type known as a `float`, for floating-poing number. A float uses 4 bytes to store negative and positive numbers that contain decimals, such as 5.12 or -17.32. 

Example input with `get_float` could look like

```c
float change = get_float("Enter the change in dollars and cents: ");
```

### double

A `double` also stores numbers with decimals, but with more precision, since it uses 8 bytes, rather than 4 bytes, of storage.

```c
double pi = get_float("Enter pi to 10 decimal places: ");
```

### char

A `char` is a data type which represents a single character of text and is stored in a single byte of memory. A `char` in C is surrounded by single quotation marks.  It's value could be a lowercase letter like 'a', uppercase letter like 'B', a symbol like '!' or the new line character '\n' which counts as a single character.

```c
char agreement = get_char("Enter Y for yes or N for no: ");
```

## CS50 Library Data Types

Data types availabe through the CS50 Library are

### string

The `string` data type holds text. A `string` variable is different than the data types listed above, since it actually holds the memory location of a series of chars, or chacters that make up the string. 

To have a user input string data, we can use the `get_string` function as in

```c
string name = get_string("Enter your name: ");
```

### bool


