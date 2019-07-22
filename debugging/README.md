# Bugs and Debugging

In this lab you will learn about:

- The difference between syntax errors and logic errors
- Various ways to debug your code 
<!--
- How to use debug50 in the CS50 IDE
-->

## What are Syntax vs. Logic Errors?

Most of us encounter **syntax errors** at some point when creating a new program. Syntax errors prevent a program from successfully compiling and could include misspelled keywords, missing or misplaced curly braces, semicolon, parentheses, etc. 

If the compiler error message is hard to understand, we can prepend `help50` to `make hello` to get a bit more guidance on how to correct our error.

```
help50 make hello
```

On the other hand, when we encounter a **logical error**, our program usually compiles and runs, but gives us an incorrect result. 

<img src="http://labs.cs50nestm.net/logical_error.gif" width="400">

{% next %}

## Debugging Methods

### Printf

Since our program executes so fast, it can be hard to know exactly what is wrong with our program just by running it. One technique that can help is to add extra `printf()` statements to examine the value of our variables at different points in our program. We can remove these once our program works correctly.

```c
printf("The value of a after loop executes: %a\n", a);
```

Sometimes we may not be sure if a block of code is even running. To know for sure if an `if` statement or `while` loop for example executes, we can add a temporary line of code inside our loop.

```c
printf("Executing while loop\n");
```

### Commenting out code

Another technique is to comment out sections of code that we know work correctly, to be able to focus only on any sections of code we need to debug. Of course we would need to make sure not to comment out code that declares or initializes variables that we will need for our testing.

To comment out blocks of code quickly, highlight multiple lines of code and press:

* `Ctrl` + `/` (On Windows and Linux)
* `Command ⌘` + `/` (On Mac)

This will toggle comments on and off.

### Rubber Duck Debugging

Yes, this is actually a thing! The idea is to explain your code, line-by-line, to a rubber duck, or another inanimate object. In describing what our code is supposed to do, and observing what it actually does, our error can become apparent. Forcing ourselves to explain code line-by-line can provide a deeper understanding as well.

### Compile and test code frequently

In general, it's a good idea to compile and run our code after every change we make to get immediate feedback. This way when we do have a bug, we can be fairly certain it is contained in the new segment of code we just finished writing.

<!-- ## Debug50

One of the advantages of using the CS50 IDE is the availability of the debugging tool, `debug50`. -->

## Your Turn

The program on the right is supposed to convert binary numbers to decimal (base ten) numbers. It compiles, so the syntax is probably correct, but the output is wrong! 

Try using some of the debugging techniques above to see if you can find the logical error and correct it. 

You can declare additional variables if you want to and use functions in any of the libraries included on top of the program.

{% spoiler "Hints" %}

Let's take a look at how this program works.



[For more info, download the CS50 Syntax Reference Sheet](https://ap.cs50.school/assets/pdfs/unit2/bugs_and_debugging.pdf)

