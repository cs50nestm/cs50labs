# Boolean Expressions and Conditionals

In this lab you will learn:

- How to use boolean expressions in C
- Why and how to combine boolean operators
- Why conditional statements are so important

## What are Boolean Expressions?

We've already seen several **boolean expressions** in Scratch. For example: 

![scratch_boolean](http://labs.cs50nestm.net/scratch_boolean.png)

is an example of a boolean expression. It has a value of either **true** or **false** depending on the value of `x`.

**Boolean Operators** are the comparison operators that we use in boolean expressions: `<` (less than), `>` (greater than), `==` (equal to), `<=` (less than or equal to), `>=` (greater than or equal to), and `!=` (not equal to).

We use **conditions** with boolean expressions to control the flow of our programs. For instance in Scratch

![if_x_y](http://labs.cs50nestm.net/if_x_y.png)

will only say "x is less than y", if indeed the condition, `x < y` is true.

Our way of writing this **if statement** in C is almost identical to scratch

```c
if (x < y)
{
    printf("x is less than y");
}
```

We also have **if-else** statements which will execute either one branch or the other:

![if_x_y](http://labs.cs50nestm.net/if_else.png)

which in C would look like

```c
if (x < y)
{
    printf("x is less than y\n");
}
else
{
    printf("x is not less than y\n");
}
```

And finally we can have more than two branches with an **if-else-if** statement:

![if_x_y](http://labs.cs50nestm.net/if_else_if.png)

which translates to:

```c
if (x < y)
{
    printf("x is less than y\n");
}
else if (x > y)
{
    printf("x is greater than y\n");
}
else if (x == y)
{
    printf("x is equal to y\n");
}
```

Notice that in C, to compare two values, we need to use `==`, double equal signs. You might remember from previous labs that the single `=` sign represents assignment.

<!-- 

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

-->

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

{% next %}

## 
