# While Loop

In this lab you will learn:

- What is a while loop
- How and when to use while loops

## What is a While Loop?

As we'll soon see, there are three types of loops we can use in C. While each type of loop can be made to do just about anything, each type of loop serves a particular purpose.

The **while loop** repeatedly executes a block of code as long as the condition we give it is true. We usually use a while loop when we don't know in advance how many times we want a block of code to repeat. An example might be to determine the number of times a number can be divided by 2. 

```c
int n = get_int("Enter a number: ");
int counter = 0;

while (n > 1)
{
    n = n / 2;
    counter++;
}
    
printf("Your number can be divided by 2 %i times\n", counter);
```

The syntax for a while loop is similar to the if statement, with the key word `while` replacing the `if`, where the condition is in parentheses and the block of code to execute is wrapped inside of curly braces `{}`. But don't confuse the `while` loop with an `if` statement. Though the syntax is similar, the execution is different. The `while` loop **repeatedly** excutes the block of code while the condition is true. The `if` statement executes the block of code **once** if the condition is true.

## Forever Loop

In scratch we saw a **forever loop** which was useful when we wanted to repeat an action forever. 

![if_x_y](http://labs.cs50nestm.net/forever.png)

We can use the while loop in C to create a forever loop.

```c
while (true)
{
    printf("hello, world\n");
}
```

Since the `while` keyword requires a condition, we use `true` as the Boolean expression to ensure that our loop will run forever. Our program will check whether the expression evaluates to true (which it always will in this case), and then run the lines inside the curly braces. Then it will repeat that until the expression isn’t true anymore (which won’t change in this case).

## Your Turn

Complete the program on the right to create a loop that determines how many times you can double a number before it reaches 100 or greater.

Then test your code, as you did in previous labs, with valid inputs, invalid inputs and corner cases.
