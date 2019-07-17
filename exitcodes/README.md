# Exit Codes

In this lab you will learn:

- What is meant an exit code
- How do we use exit codes

## What is an Exit Code?

You may have noticed that the `main()` function has a return type of `int`, yet we haven't been returning anything at the end of the main function.

It turns out that the compiler automatically returns 0 from our main function, if we don't specify anything. This value is called an **exit code**. As our programs get longer and more complex, these exit codes will become a valuable tool.

## Using Exit Codes

By convention, when a program executes successfully, it should return an exit code of 0. That's why the compiler assumes that if no return statement is provided at the end of **main**, the program should return 0. You could add `return 0` as the end of your program as well.

If a value other than 0 is returned from main, this generally means that some type of error was encountered while executing our program. This could, for instance, be that an **input validation** check failed. Perhaps the program requires two command-line arguments, and the user only input one. We might have our program return a non-zero exit code to signal an error. 








[For more info, download the CS50 Syntax Reference Sheet](https://ap.cs50.school/assets/pdfs/unit2/exit_codes.pdf)

