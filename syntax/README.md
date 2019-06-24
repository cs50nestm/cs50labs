# Syntax

## What is Syntax?

In linguistics, syntax is the set of rules for using words, phrases and punctuation to form sentences. If the word order of a sentence was incorrect, you might not understand what is being said to you. For instance, 

```
Science is comprehensive to a computer CS50 introduction
```
might not make a lot of sense to you if you speak English. But

```
CS50 is a comprehensive introduction to computer science
```

probably does!

{% next %}

## Syntax in C

In **Computer Science**, syntax is also important for a computer to undersand what you are telling it to do. Each programming language has it's own syntactical rules, which include the combination of both words and punctuation. 

For instance, to say "hello" in C, we would write:

```c
printf("hello,  world\n");
```

The `printf` function in C, is the equivalent to the `say` block in Scratch. Note that our `printf` function takes an argument, or parameter, which is wrapped in symmetrical parentheses, `(` and `)`.

You may also notice the double quotes `"`, which are also also symmetrical, and which surround words, or sequences of characters. We'll start calling these sequences of characters `strings`.

And finally, the entire line ends with a semicolon, `;`, which new programmers like us need to remember to include, but which will come more naturally with practice!

{% next %}

Just like how we need the `when green flag` clicked block in Scratch to start our program, our C program won’t run unless we write a few lines to set it up.

```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

Notice the `int main(void)` line, which is the standard name in C of a default function which is required for the program to run. When you execute a C program, the `main` function will automatically run.

Don't worry yet about the terms `int` and `void`! Well be learning more about those later on. 

The curly braces `{` and `}` are symbols you'll see frequently in C. They are used here to wrap the code that we want to execute in our `main` function.

The line `#include <stdio.h>` may not be obvious at first. The term `include` is a keyword that indicates we want to include some other file in our program, and it must be preceded by the symbol `#`. The library,`stdio.h`, contains (and we only know from searching online and looking at documentation) the standard input/output library, which means that it deals with input (like from the keyboard) and output (printing characters to the screen). In fact, it contains the code of printf that we are using. There is no equivalent in Scratch, since by default the functions are already defined and created for us.

Now it's your turn to try out decoding some syntax in C!

{% next %}

Take a look at the program on the right. There are several syntax errors in it. See if you can edit the code to correct the errors.

## Testing with `check50`

To evaluate the correctness of your code, type in the following after the dollar prompt `$` in the terminal below your code. Log in with your GitHub username and password when prompted. For security, you'll see asterisks (`*`) instead of the actual characters in your password.

```
check50 <slug goes here>
```

Assuming your program is correct, you should then see output like

```green
:) style.c exists
:) style.c compiles
:) prints "This is CS50AP!\n"
```

If you instead see yellow or red smileys, it means your code isn’t correct! For instance, suppose you instead see the below.

:( hello.c exists
  \ expected hello.c to exist
:| hello.c compiles
  \ can't check until a frown turns upside down
:| prints "Hello, world!\n"
  \ can't check until a frown turns upside down


## How to Submit

When all is good, type in the following `submit50` code below, again at the `$` prompt. The process will be the same as the `check50` above, but this time your code will be submitted to `cs50.me` for grading.

```
submit50 <slug goes here>.
```
 



