# Recursion

In this lab you will learn:

- What recursion is all about
- How to use recursion in a program

## What is Recursion?

<!--![Recursive_Tree](https://upload.wikimedia.org/wikipedia/commons/f/f7/RecursiveTree.JPG)-->

<img src="https://upload.wikimedia.org/wikipedia/commons/f/f7/RecursiveTree.JPG" width="250">

A **recursive** solution is when a function repeatedly calls itself until a base case is reached.

The image above relies on **recursion** in that each branch is a smaller version of the original tree.

{% next %}

An example of a program that can be written using recursion is one to calculate factorial. After all 4 factorial (or 4!), can be broken down as follows:

```
4!
4 * 3!
4 * (3 * 2!)
4 * (3 * (2 * 1!))
4 * (3 * (2 * 1))
```

The base case is reached when we get to 1! which is equal to 1.

In code we can write a recursive factorial function as:

```c
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
```

The function returns factorial of the next lowest number, which invokes a function call to itself, until the base case is reached. This happens when the input to the function is 1. Each intermediate function call is put on hold, waiting for subsequent function calls to return a value.

{% next %}

Most recursive solutions can also be written as iterative solutions. For example, the factorial function above can be written as:

```c
int factorial(int n)
{
    int product = 1;
    for(int i = n; i > 0; i--)
    {
        product *= i;
    }
    return product;
}
```

Iterative solutions can be simpler than recursive ones, but recursive solutions can sometimes lead to incredibly efficient, elegant, and even beautiful solutions.

{% next %}

## Your Turn

Rewrite the function `summation()` in the program on the right to use recursion rather than iteration.

Be sure to test out your function with valid an invalid inputs. What happens if you enter a negative number?

[Download our CS50 Reference sheet on Recursion](https://ap.cs50.school/assets/pdfs/unit4/recursion.pdf)
