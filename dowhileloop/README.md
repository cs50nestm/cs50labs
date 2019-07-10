# Do-While Loop

In this lab you will learn:

- What is the difference between a while and do-while loop
- How and when to use do-while loops

## What is a Do-While Loop?

The **do-while loop** is similar to a while loop in the sense that it repeatedly executes a block of code as long as the condition we give it is true. The do-while loop though, will always execute at least once, and then check the condition to determine if it should execute again and again.

This is very useful when we want to validate user input. For instance, say you want to prompt the user for a positive integer, and you do not want to accept negative numbers or zero. The CS50 `get_int()` function does a great job at rejecting inputs that are not ints, but since negative numbers and zero are ints, we have to do our own checking for these.

```c
```
