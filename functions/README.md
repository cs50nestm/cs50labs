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

We can write our own functions as well! Once we've taken the time to program and debug our function, we can use it over and over again in multiple programs. Using functions, our code becomes **simpler**, more **organized**, and **easier to debug**!

Every C program that we've written so far contains one function, the **main function**. We can define our own custom functions wiht similar syntax. 

The first line of a function requires three parts: **first**, the function's **return type**, which is the data type of the function's output that is "returned" to where the function was called. The return type of the `get_int()` function, for instance, is an `int`. Sometimes a function does not return a value, (such as `printf()`), in which case the return type is `void`. 

**Second**, the function's **name**; this cannot include spaces and cannot be one of C's existing keywords. 

**Third**, in parentheses, the function's parameters, also known as **arguments**. These are the function's inputs (if there are none, use `void`). The data type of each argument must be included in front of the argument name.

After this first line (known as the declaration line), the code defining the function itself is enclosed in curly braces.

{% next %}

An example of a creating and using a custom function in C is seen here.

```c
#include <cs50.h>
#include <stdio.h>

int square(int n)
{
    return n *  n;
}

int main(void)
{
    int side = get_int("Enter the side length: ");

    printf("The area is %i.\n", square(side));
}
```

We've created a custom function named `square()`. We declare the function with the return type `int`, the name, `square`, and the argument with it's type, `(int n)`. Our `main()` function calls the `square()` function when printing the square of the input. We call the function using its name `square` with the value we are passing into that function `side`. The previous line of code declares and gets a value for `side`, so this variable is already initialized.

The function now runs and the value that's is passed it when it's called (stored in `side`) is copied into the variable defined as an input in the function (`n`). We now calculate the square and return it's value, which is an `int` since the function was declared with an `int` return value.

Feel free to try typing this code into a new file, compiling it, and testing it.

{% next %}


