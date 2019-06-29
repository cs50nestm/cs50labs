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
