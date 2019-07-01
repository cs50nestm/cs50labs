# Syntax

In this lab you will learn:

- What is meant by syntax in programming
- How to use the `printf` function
- Why we use curly braces and semicolons
- How to use a library
- How to create a simple program in C

## What is Syntax?

![SyntaxVideo](http://labs.cs50nestm.net/syntax.gif)

In linguistics, syntax is the set of rules for using words, phrases and punctuation to form sentences. If the word order of a sentence is incorrect, you might not understand what is being said to you. 

{% next %}

## Syntax in C

In **Computer Science**, syntax is also important for a computer to undersand what you are telling it to do. Each programming language has it's own syntactical rules, which include the combination of both words and punctuation. 

For instance, to say "hello" in C, we would write:

```c
printf("hello,  world\n");
```

The `printf` function in C, is the equivalent to the `say` block in Scratch. Note that our `printf` function takes an **argument**, or parameter, which is wrapped in **symmetrical parentheses**, `(` and `)`.

You may also notice the **double quotes** `"`, which are also symmetrical, and which surround words, or sequences of characters. We'll start calling these sequences of characters `strings`.

And finally, the entire line ends with a **semicolon**, `;`, which new programmers like us need to remember to include, but which will come more naturally with practice! A semicolon is used at the end of every statement, like a period at the end of a sentence.

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

The **curly braces** `{` and `}` are symbols you'll see frequently in C. They are used here to wrap the code that we want to execute in our `main` function. You'll soon see curly braces used with loops, to indicate which segments of code to repeat; with conditional statements to tell the computer which block to to run for each of the conditions if they are true, and with other programing constructs as well.

The line `#include <stdio.h>` may not be obvious at first. The term `include` is a keyword that indicates we want to include some other file in our program, and it must be preceded by the symbol `#`. The **library**,`stdio.h`, contains (and we only know from searching online and looking at documentation) the standard input/output library, which means that it deals with input (like from the keyboard) and output (printing characters to the screen). In fact, it contains the code of printf that we are using. There is no equivalent in Scratch, since by default the functions are already defined and created for us.

<!-- +

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

We also used conditional statements in Scratch.

![conditional](http://labs.cs50nestm.net/conditional_scratch.png)

In C, the equivalent code will look like this:

```c
if (x < y)
{
    printf("x is less than y\n");
}
else if (x > y)
{
    printf("x is greater than y\n");
}
else
{
    printf("x is equal to y\n");
}
```

• In our code, we assume that `x` and `y` have already been initialized or set to some other values beforehand.

• We use the `if`, `else if`, and `else` keywords to denote the forks in the road, based on Boolean expressions. else simply captures all the cases that haven’t fit into a previous condition.

• Notice that curly braces, `{` and `}`, are used to wrap the lines of code that we want to run for each of the conditions if they are true. We also use indentation to make the lines of code more readable.

{% endspoiler %}

+ -->

{% next %}

### Now it's Your Turn!

Now it's your turn to try out decoding some syntax in C!

Take a look at the program on the right. There are several syntactical errors in it. See if you can edit the code to correct the errors. **Look carefully at all the details in the example above for reference**.

When you are done, **compile** your program by typing the following in the terminal window after the `$` prompt followed by Enter.

```
make syntax
```

If you see any errors, it's time to debug! You may have left out something small like a `;` or misspelled something. If you have a hard time finding your error, try "prepending" `help50` to your command like this:

```
help50 make syntax
```

Once you feel you've corrected any errors, execute `make syntax` again, and repeate this process until no more errors appear.

Then execute your program, by typing in the following, again followed with Enter.

```
./syntax
```

{% next "Ready to Test Your Code?" %}

### Testing with `check50`

<style type="text/css">
#red {color:red;}
#green {color:green;}
#orange {color:orange;}  
</style>

To evaluate the correctness of your code, type in the following after the dollar prompt `$` in the terminal below your code. Log in with your GitHub username and password when prompted. For security, you'll see asterisks (`*`) instead of the actual characters in your password.

```
check50 syntax@cs50nestm/checks
```

Assuming your program is correct, you should then see output like:

<div id="green">
<pre><code>:) syntax.c exists.<br/>
:) syntax.c compiles.<br/>
:) prints "This is CS50AP!\n"</code></pre>
</div>

If you instead see yellow or red smileys, it means your code isn’t correct! For instance, suppose you see something like this:

<div><pre>
<span id="green">:) syntax.c exists.</span>
<span id="red">:( syntax.c compiles.
    expected exit code 0, not 1</span>
<span id="orange">:| prints "This is CS50AP!\n"
    can't check until a frown turns upside down</span>
</pre></div>

Because check50 is not able to compile style.c, as per the red smiley, odds are you still have an error in your syntax. The other yellow smiley, means that the check is dependent on sytax.c compiling, and so it wasn’t even run.

{% next %}

### Styling with `style50`

Though C doesn't care about how you style your code (in other words code with correct syntax but inconsistent spacing will compile and execute), CS50 does! That's because spacing your code consistently makes it easier to read and as we'll see soon, easier to debug.

You can check that your spacing is correct by executing the following at the `$` prompt:

```
style50 syntax.c
```

If there’s room for improvement in your code’s style, highlighted in red will be any characters you should delete, and highlighted in green will be any characters you should add.

{% next %}

Congratulations! You've completed the Syntax Lab! 

<!-- + Feel free to refer back to the `More Syntax` section above as you work on future programming problems and labs! + -->
