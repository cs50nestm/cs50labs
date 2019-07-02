# Operators

In this lab you will learn:

- How math operators work in C
- How and when to use the remainder operator
- The different ways of using assignment operators

## Arithmetic Operators

The addition (`+`), subtraction (`-`), and multiplication (`*`) operators work the same way in C as they do in your math class. No big surprises here. 

We can write

```c
10 * 3
```

and of course the result would be `30`. 

We can use these operators with numbers or variables. If I've already assigned the value `10` to an integer varialbe `a`, this
is the same exact operation as above.

```c
a * 3;
```

However, this is not storing the resulting value of `30` in anything. The value of `a` is not changed. It's value is just used as part of this calculation.

If we wanted to store the result of this calculation in a new int variable, `b`, we would write

```c
int b = a * 3;
```

If we wanted to change the variable, `a` to be equal to 3 times itself, we could write

```c
a = a * 3;
```

Notice that I didn't write `int` in front of the `a` in this last example. Why? Well in order for `a` to already have a value, `a` would have already been declared earlier in my program!

{% next %}

## What about division?



{% next %}

## CS50 Library Data Types

Data types availabe through the CS50 Library are

### string

The `string` data type holds **text**. A `string` variable is different than the data types listed above, since it actually holds the memory location of a series of chars, or chacters that make up the string. 

Strings in C must be surrounded by double quotes (`"`). For instance

```c
string name = "Zamyla";
```

To have a user input string data, we can use the `get_string` function as in

```c
string name = get_string("Enter your name: ");
```

### bool

A `bool` is a data type that stores one of only two possible values: **true or false**. It could be used to control the flow of code.

For instance

```c
bool game_started = true;
bool game_finished = false;
```



[For more info on data types, download the CS50 Operators Reference Sheet](https://ap.cs50.school/assets/pdfs/unit1/operators.pdf)
