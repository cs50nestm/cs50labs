# Variables

## What is a Variable?
In computer programming, a variable is a container that holds numbers, words, or other types of data to use in your program. Variables in programming are similar to variables in those you use in math class, since they both represent a value, but unlike variables in math, variables used in programming do not represent an "unknown", and has a value that can change.

Another difference is in variable names. In math, variables are only one letter long, as in x, or y, or n. While in most programming languauges, variable names can be a single letter, they can also be a word or phrase (as long as there are no spaces). It's considered good programming practice, to use variable names that represent the data they are being used to store. For instance, you might store your name in a variable `name`, and your age in a variable `age`. You can combine multiple words with underscores, such as `student_name`, and `teacher_name`. But if you try to name a variable `student name`, your program won't understand what you want it to do.

{% next %}

## Declaring a Variable
In the C Programming Language, you have to create, or declare, a variable before you can use it. You do this by telling the program the type of data your variable will hold, for instance an integer, and the name of your variable.

```c
int age;
```

This declares the variable named age as an integer, meaning it can only hold whole numbers.

If you try to use a variable before you declare it, you will generate an error when you try to compile your program.

{% next %}

## Assigning a Value to a Variable

To store a number in the variable we just declared we can write:

```c
age = 18;
```
The `=` sign here works very differently than it does in your math class. It is an assignment operator, not an equality operator, and it says to the computer, store the number 18 in the variable named `age`.

Assignment always works from right to left. In other words, the value on the right side of the `=` is evaulated first and then stored in the variable whose name is on the left side of the `=`.



{% next %}

## Using Variables

Here is CS50's Vipul Shekhawat explaing more about variables and how to use them.

{% video https://www.youtube.com/watch?v=FPL_0lpzBjo %}

{% next %}

## Getting User Input



