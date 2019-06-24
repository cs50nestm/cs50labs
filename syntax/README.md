# Syntax

## What is Syntax?

In linguistics, syntax is the set of rules for using words, phrases and punctuation to form sentences. If the word order of a sentence is incorrect, you might not understand what is being said to you. For instance, 

```
Science is comprehensive to a computer CS50 introduction.
```
might not make a lot of sense to you if you speak English. But

```
CS50 is a comprehensive introduction to computer science.
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

You may also notice the double quotes `"`, which are also symmetrical, and which surround words, or sequences of characters. We'll start calling these sequences of characters `strings`.

And finally, the entire line ends with a semicolon, `;`, which new programmers like us need to remember to include, but which will come more naturally with practice!

{% next %}

## Creating a Program

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

{% spoiler "More Syntax" %}

### Additional Syntax

You've already seen all the syntax you'll need to solve this problem, though you will eventually need to use additional programming constructs such as loops and conditionals.

A forever block from scratch can be translated to C like this:

```c
while (true)
{
    printf("hello, world\n");
}
```

The while keyword means that the loop will run as long as the Boolean expression inside the parentheses is true. And since true will always be true, the loop will run forever.

To repeat something a certain number of times, we can use this:

```c
for (int i = 0; i < 50; i++)
{
    printf("hello, world\n");
}
```

• This is a little harder to figure out, but we can go through step by step. for is another keyword in C that indicates a loop.

• `int i = 0` is an initialization of a variable, which means that we created a variable with the name `i`, of the type int, or integer, and set its initial value to 0. In C, each variable has a type of value.

• Then `i < 50` is the Boolean expression that the for loop checks, to determine if it will continue or not. Since this condition is true, the for loop will run the printf line. And since we started `i` at 0, stopping before `i` reaches 50 will mean this runs exactly 50 times, as we intended.

• Finally, `i++` is an expression in C that adds 1 to the value of `i`. Then, the for loop will check `i < 50`, and repeat this process until the Boolean expression is no longer true.

{% endspoiler %}

Now it's your turn to try out decoding some syntax in C!

Take a look at the program on the right. There are several syntactical errors in it. See if you can edit the code to correct the errors. Look carefully at all the details in the example above for reference.

{% next %}

### Testing with `check50`

To evaluate the correctness of your code, type in the following after the dollar prompt `$` in the terminal below your code. Log in with your GitHub username and password when prompted. For security, you'll see asterisks (`*`) instead of the actual characters in your password.

```
check50 syntax@cs50nestm/checks
```

Assuming your program is correct, you should then see output like

![Correct](http://labs.cs50nestm.net/check50_correct.png)

If you instead see yellow or red smileys, it means your code isn’t correct! For instance, suppose you instead see the below.

![Error](http://labs.cs50nestm.net/check50_error.png)

Because check50 is not able to compile style.c, as per the red smiley, odds are you still have an error in your syntax. The other yellow smiley, means that that check is dependent on style.c compiling, and so it wasn’t even run.


### Styling with `style50`

Though C doesn't care about how you style your code (in other words code with correct syntax but inconsistent spacing will compile and execute), CS50 does! That's because spacing your code consistently makes it easier to read and as we'll see soon, easier to debug.

You can check that your spacing is correct by executing the following at the `$` prompt:

```
style50 syntax.c
```

If there’s room for improvement in your code’s style, highlighted in red will be any characters you should delete, and highlighted in green will be any characters you should add.

### Submitting with `submit50`

When all is good, type in the following `submit50` code below, again at the `$` prompt. The process will be the same as the `check50` above, but this time your code will be submitted to `cs50.me` for grading.

```
submit50 syntax@cs50nestm/checks
```
