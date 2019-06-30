# Variables

## What is a Variable?
In computer programming, a variable is a container that holds numbers, words, or other types of data to use in your program. Variables in programming are similar to the variables you use in math class, since they both represent a value, but unlike variables in math, variables in programming do not represent an "unknown", and hold values that can change as the program executes.

Another difference is in variable names. In math, variables are only one letter long, as in x, or y, or n. In most programming languauges, variable names can be a either a single letter or a word or phrase (as long as there are no spaces). In fact, it's considered good programming practice, to use variable names that represent the data they are being used to store. 

For instance, you might store your name in a variable `name`, and your age in a variable `age`. You can combine multiple words with underscores, such as `student_name`, and `teacher_name`. But if you try to name a variable with a space in it, such as `student name`, your program won't understand what you want it to do!

A good variable name that accurately describes its purpose can help someone else reading your code to understand it at first glance, as opposed to having no idea of what your program is doing!

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

One thing that look strange to most people who start programming for the first time, is an expression like:

```c
age = age + 1;
```

In math class, we know this can never be true! How can age equal itself plus one?

But if we remember that the `=` represents assignment, and not equality, we can read this as: evaluate the result of adding one to the value stored in `age`, then reassign this new value to `age`. 

Keep in mind when you write a statement like this, that you must have already assigned an intial value to `age`. In other words:

```c
int age;
age = age + 1;
```

will generate an error, because `age` is declared, but not have a value when you try to add one to it. Instead, we'll assign a starting value to `age` and then increase it by one.

```c
int age;
age = 18;
age = age + 1;
```

A shorcut you might like is to assign a value to a variable at the same time that you are declaring it.

```c
int age = 18;
```

{% next %}

## Using Variables

Here is CS50's Vipul Shekhawat reviwing some of what we said above, and explaing more about how to use variables.

{% video https://www.youtube.com/watch?v=FPL_0lpzBjo %}

{% next %}

## Getting User Input

So we've seen how you can code values into your variable by typing them into your program, but what if you want a use a different value for a variable each time you run your program?

In this case you can use CS50's User Input functions, to prompt the user for a value in your terminal.

![Prompting](http://labs.cs50nestm.net/userInput.gif)

There are several CS50 User Input functions, depending on the type of data (data type) that you want your variable to hold. Since `age` is an int, we could user `get_int` to prompt for a value like this:

```c
age = get_int("Enter Your Age: );
```

The function get_int takes an argument, which is the text that you want to prompt the user with. Note that the prompt is wrapped inside of double quotes, `"` since it is a string, the argument is inside of parentheses `(` and `)` and the line ends with `;`.

Do note that `age` would have had to be declared earlier on in your program for this code to execute. 

You could, of course, declare `age` and assign it a value in one line of code.

```c
int age = get_int("Enter Your Age: );
```

To use the CS50 User Input functions, you do have to include the CS50 library by typing in: 

```
#include <cs50.h>
```

at the top of your program.

{% next %}

## Now It's Your Turn!

The program on the right is correct and will execute properly. But what if we want to allow different users to run it and use different ages each time? It's a lot of work to have to change each occurance of `17` to whatever age the user wants to use!

So your job is to edit the code provided, to use one or more variables, along with user input.

Declare a new variable `age` as an int. Then use `get_int` with a prompt to ask the user to input a value.

Now replace every occurance of `17` with `age`, so that the program uses the variable rather than the hardcoded number, for each calculation.

When you are done, compile your program by typing the following in the terminal window after the `$` prompt followed by Enter.

```
make variables
```

If you see any errors, it's time to debug! You may have left out something small like a `;` or misspelled something. If you have a hard time finding your error, try "prepending" `help50` to your command like this:

```
help50 make variables
```

Once you feel you've corrected any errors, execute `make variables` again, and repeate this process until no more errors appear.

Then execute your program, by typing in the following, again followed with Enter.

```
./variables
```

Hopefully you should now see the prompt you've written. Enter a number and see what happens!

{% next %}

## Testing

### Correctness

Before turning in your solution, be sure to test the correctness of your program with check50, by executing the below.

```
check50 <slug goes here>
``` 
  
### Style

If you pass all the check50 test cases, and get all green smiley faces, try checking style50, as with:

```
style50 variables.c
```

If not, don’t worry: it’s just time for a little bit of debugging and/or cleaning up your code.

{% next "Ready to Submit?" %}

## Submit

To submit your code, execute

```
submit50 <slug>
```

Your submission should be graded for corretness and style withing a few minutes on [cs50.me](https://cs50.me/)
