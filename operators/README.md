# Operators

<!--

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

If we wanted to store the result of this calculation in a new integer variable, `b`, we would write

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

You'll notice I didn't mention division in the section above. That's because division works a bit differently than you are used to. 

The symbol used for division is `/`, however, division in C works differently when you are dividing ints than it does when you are dividing floats.

If I write

```c
5 / 2;
```

the C language will interpret this as dividing two ints. Now if you remember when you first learned about data types, ints can only hold whole numbers. So the operation of dividing two ints will truncate, or cut off everything in the result that comes after the decimal point. The result of this operation is therefore 2! 

If doesn't matter if I try to store this in an `int` or a `float`. The result of the operation will be evaluated first, and then assigned to my variable.

If I write

```c
int a = 5 / 2;
```

the value of my `int` a will be 2.

If I write

```c
float b = 5 / 2;
```

the value of the `float` b will be 2.0.

If instead, at least one of the numbers in my division statement is a float, C will interpret this as dividing two floats. So

```c
float b = 5.0 / 2;
```

will assign 2.5 to `b`.


However if I write

```c
int a = 5.0 / 2;
```

let's think about what happens. The division results in a `float`, but now this value is assigned to an `int`, so again, everything after the decimal point gets truncated, resulting in the value of `a` being 2.

{% next %}

# The Modulo Operator

An operator in most programming languages that you may not have seen before, is the remainder, or **modulo** operator. The symbol used by modulo is the `%` sign, and an operation using modulo looks like this

```c
int remainder = 5 % 2;
```

The result of this operation is, of course, that `remainder` will be set equal to `1`.

Though it may not be obvious at first, this operator can be very useful in programming. It can tell you if a value is divisible by a number, and as we'll see later can also be used as a wrap around operator, where numbers wrap around back to zero after reaching a certain value.

Modulo can only be used with ints.

## Assignment Operators


We've already seen the assignment operator `=`. This evaulates the expression on the right side of the statement, and assigns it to the variable on the left.

There are a few shortcuts for assignment that you'll soon encounter as well.

| Symbol     | Example      | Result |
| ------------- |------------------| ------- |
| ++           | a++;    | increases the value of a by 1
| --           | a--;    | decreases the value of a by 1
| +=           | a += 2;           | sets a to 2 **plus** the initial value of a|
| -=           | a -= 2;           | sets a to 2 **minus** the initial value of a|
| \*=          | a \*= 2            | sets a to 2 **times** the initial value of a|
| \=          | a \= 2            | sets a to 2 **divided by** the initial value of a|


{% spoiler "More on Operators" %}

{% video https://www.youtube.com/watch?v=f1xZf4iJDWE %}

(% endspoiler %}

-->

[For more info on data types, download the CS50 Operators Reference Sheet](https://ap.cs50.school/assets/pdfs/unit1/operators.pdf)
