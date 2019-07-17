# Command-Line Interaction

In this lab you will learn:

- What are command-line arguments
- How can we use command-line arguments to provide input to our program
- Why we need to test for the correct argument count

## What are Command-Line Arguments?

Up until now, we've been getting user input through using functions such as `get_int()`, `get_string()`, etc. There is another way of getting input to our program as well, which is by using **command-line arguments**.

We saw David write a program early on that says "Hello" followed by a name, using `get_string()` to get the name, and saving this in a string variable, `s`. We executed this program by typing

```
./hello
```

If we use **command-line interaction**, we can get the input for `s` at the same time that we execute the program, rather than prompting for it.

```
./hello David
```



{% next %}

