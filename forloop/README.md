# For Loop

In this lab you will learn:

- Why we have a for loop
- How to use a for loop

## What is a For Loop?

The **for loop** is probably the most frequently used loop of the three types of loops. It is very useful when you want to repeat something a known number of times. 

Eventually we'll see how for loops can be useful for: 
• Repeating a block of code 10 or 20 or *n* times when you know in advance the value of *n*
• Accessing each individual characters in a string
• Looking at each element in an array (more on this to come later!)

![scratch_repeat](http://labs.cs50nestm.net/repeat.png)

can be recreated in C by

```c
for (int i = 0; i < 50; i++)
{
  printf("hello, world\n");
}
```

A for loop has three parts (included in parentheses after the word for, and separated
by semicolons)

1. `int i = 0` is an initialization of a variable, which means that we created a variable with the name `i`, of the type int, or integer, and set its initial value to 0. In C, each variable has a type of value.

2. Then `i < 50` is the Boolean expression that the for loop checks, to determine if it will continue or not. Since this condition is true, the for loop will run the printf line. And since we started `i` at 0, stopping before `i` reaches 50 will mean this runs exactly 50 times, as we intended.

3. Finally, `i++` is an expression in C that adds 1 to the value of `i`. Then, the for loop will check `i < 50`, and repeat this process until the Boolean expression is no longer true.

<!--
A for loop has three parts (included in parentheses after the word for, and separated
by semicolons), demonstrated at left (lines 1-4).
The first part is the initialization: we create a variable i initially set to 0.
This variable keeps track of which iteration the for loop is currently on.
Second is the condition: as long as the condition i < 10 is true, everything within the curly braces will keep running. As soon as the condition is false, then the loop ends. The third part is the loop modification:
this code is executed at the end of every loop. In this case, we modify our loop by increasing the value of i by 1.
Thus, each time the loop finishes, i will increase in value by 1. As soon as i is no longer less than 10, the condition fails and the loop will end. The end result is that "hello\n" is displayed 10 times.
By taking advantage of loop modification, you can also get a loop to do something slightly different each time
the loop iterates. In the second for loop example (lines 5-8 above), j is initially 0, and so 0 is printed. Then j
increments to 1, and 1 is printed in the next loop iteration. This continues until j is no longer less than 10. The
result is that each number from 0 to 9 is printed on its own line.


-->

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



[For more info, download the CS50 Loops Reference Sheet](https://ap.cs50.school/assets/pdfs/unit1/loops.pdf)

