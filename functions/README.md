# Functions

In this lab you will learn:

- What is a function
- Why programmers use functions
- How to write your own functions in C

## What is a Function?

Since the first program we wrote together, we've been using functions! These were functions that were given to us, that we didn't have to create ourselves, such as `printf()`, `get_int()`, etc.

These functions were written by programmers many years ago, and are made available to us so we don't have to constantly recreate the wheel! We are able to use these functions over and over again. This points to one key reason why programmer use functions, which is **reusability**. 

Imagine what programming would be like if we had to recreate `printf()` every time we wanted to output something to our terminal window! It would take forever to complete the simplist program! 

The other key reason that programmers use functions is **abstraction**. To use `get_int()` for instance, we need to know 
* The name of the function
* What the function does
* What arguments to give to the function
* What kind of result the function returns

One thing we **don't** need to know is **how the function works inside**! You don't have to know anything that goes on inside of the function.

{% next %}

## Writing our own Functions

We can write our own functions as well! Once we've taken the time to program and debug your function, we can use it over and over again in multiple programs. Using functions, our code becomes **simpler**, more **organized**, and **easier to debug**!

Every program that we've written so far contains one function, the **main function**. We can define our own custom functions wiht similar syntax. 

The first line of a function requires three parts: **first**, the function's **return type**, which is the data type of the function's output that is "returned" to where the function was called. The return type of the `get_int()` function, for instance, is an `int`. Sometimes a function does not return a value, (such as `printf()`), in which case the return type is `void`. 

**Second**, the function's **name**; this cannot include spaces and cannot be one of C's existing keywords. 

**Third**, in parentheses, the function's parameters, also known as **arguments**. These are the function's inputs (if there are none, use void). After this first line (known as the declaration line), the code defining the function itself is enclosed in curly braces.

