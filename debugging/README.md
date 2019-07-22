# Bugs and Debugging

In this lab you will learn about:

- The difference between syntax errors and logic errors
- Various ways to debug your code 
- How to use debug50 in the CS50 IDE

## What are Syntax vs. Logic Errors?

Most of us encounter **syntax errors** at some point when creating a new program. Syntax errors prevent a program from successfully compiling and could include misspelled keywords, missing or misplaced curly braces, semicolon, parentheses, etc. 

If the compiler error message is hard to understand, we can prepend `help50` to `make hello` to get a bit more guidance on how to correct our error.

```
help50 make hello
```

On the other hand, when we encounter a **logical error**, our program usually compiles and runs, but gives us an incorrect result. 

<img src="http://labs.cs50nestm.net/logical_error.gif" width="400">

## Debugging Methods

{% next %}

### Printf

Since our program executes so fast, it can be hard to know exactly what is wrong with our program just by running it. One technique that can help is to add extra `printf()` statements to examine the value of our variables at different points in our program. We can remove these once our program works correctly.

```c
printf("The value of a before for loop %a\n", a);
```

Sometimes we may not be sure if a block of code is even running. To know for sure if an `if` statement or `while` loop for example executes, we can add a temporary line of code inside our loop.

```c
printf("Executing while loop\n");
```

### Commenting out code

Another technique is to comment out sections of code that we know work correctly, to be able to focus only on any sections of code we need to debug. Of course we would need to make sure not to comment out code that declares or initializes variables that we will need for our testing.

To comment out blocks of code quickly, highlight multiple lines of code and press:

* Ctrl + / (On Windows and Linux)
* Command ⌘ + / (On Mac)

This will toggle comments on and off.

### Compile and test code frequently

In general, it's a good idea to compile and run our code after every change we make to get immediate feedback. This way when we do have a bug, we can be fairly certain it is contained in the new segment of code we just finished writing.


[For more info, download the CS50 Syntax Reference Sheet](https://ap.cs50.school/assets/pdfs/unit2/bugs_and_debugging.pdf)

