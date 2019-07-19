# Typecasting

In this lab you will learn about:

- What we mean by typecasting
- Possible uses of typecasting
- Implicit vs. explicit typecasting

## What We Mean By Typecasting

As we know by now, there are several data types in C: ints, floats, chars, etc. There are situations when we might want to convert a variable from one data type to another data type; we can do this using **typecasting**, or just **casting**.

Why would we want to **cast** a variable from one data type to another? Say we we want to write a program to calculate the average class size at our school. We have two integer variables: the sum of class sizes: `class_size_total` and the total number of class, `total_classes`. 

```c
int class_size_total = get_int("Sum of class sizes: ");
int total_classes = get_int("Number of classes: ");
```

If we calculate the average as 

```c
float average = class_size_total / total_classes;
```

What kind of result can we expect? Remember, when we divide an int by another int, C truncates any values after the decimal point. We want to get a more precise value here.

We would **cast** one of our **int** variables to a **float** to calculate the average as a floating point number.

```c
float average = (float) class_size_total / total_classes;
```

Here we **explicitly** cast `class_size_total` to a float, then perform the division, which will now result in a floating point value.

The variable `class_size_total` isn't permanently changed to a `float`; rather the value is treated as the float in that statement. `class_size_total` is always an `int` in this program.



[For more info on data types, download the CS50 Data Types Reference Sheet](https://ap.cs50.school/assets/pdfs/unit2/typecasting.pdf)
