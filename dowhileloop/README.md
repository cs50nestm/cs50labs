# Do-While Loop

In this lab you will learn:

- What is the difference between a while and do-while loop
- How and when to use do-while loops

## What is a Do-While Loop?

The **do-while loop** is similar to a while loop in the sense that it repeatedly executes a block of code as long as the condition we give it is true. The do-while loop though, will always execute at least once, and then check the condition to determine if it should execute again and again.

This is very useful when we want to validate user input. For instance, say you want to prompt the user for a positive integer, and you do not want to accept negative numbers or zero. The CS50 `get_int()` function does a great job at rejecting inputs that are not ints, but since negative numbers and zero are ints, we have to do our own checking for these.

```c
int positive_int;

do
{
  positive_int = get_int("Enter a positive int: ");
}
while (positive_int <= 0);
```

The condition here often seems counterintuitive. We are declaring a variable `positive_int` first, since a variable declared inside of a loop is a temporary variable, and only available inside that loop. The initial keyword `do` starts our loop. We then execute the code inside the curly braces, and then check the condition after the `while` keyword. As long as the condition is true, we repeat everything inside the curly braces. So in this case, we repeat the user prompt when the input is **invalid**. 

Note that there is a semicolon `;` after the condition, since this is the end of this statement. 

{% next %}

## Your Turn

Complete the program to the right to include a do-while loop to validate user input. The program should only accept a number between 1 and 10 inclusive.

Be sure to test your program with numbers in this range, numbers outside of this range, as well as zero, negative numbers and floating point numbers.
