# Boolean Expressions and Conditionals

In this lab you will learn:

- How to use Boolean expressions in C
- Why and how to combine Boolean operators
- Why conditional statements are so important

## What are Boolean Expressions?

We've already seen several **boolean expressions** in Scratch. For example:

![scratch_boolean](http://labs.cs50nestm.net/scratch_boolean.png)

is an example of a boolean expression. It has a value of either **true** or **false** depending on the value of `x`.

**Boolean operators** are the comparison operators that we use in Boolean expressions: `<` (less than), `>` (greater than), `==` (equal to), `<=` (less than or equal to), `>=` (greater than or equal to), and `!=` (not equal to).

{% next %}

## Conditional Statements

### The `if` Statement

We use boolean expressions with **if statements** to execute different parts of code, depending on different circumstances.  For instance in Scratch:

![if_x_y](http://labs.cs50nestm.net/if_x_y.png)

will only say "x is less than y", if the condition, `x < y` is true.

Our way of writing this **if statement** in C is almost identical to scratch:

```c
if (x < y)
{
    printf("x is less than y\n");
}
```

In our code, we assume that `x` and `y` have already been initialized or set to some other values beforehand.

We use curly braces, `{` and `}`, to wrap the lines of code that we want to run for each of the conditions if they are true. We also use indentation to make the lines of code more readable.

{% next %}

We also have **if-else** statements which will execute either one branch or the other:

![if_x_y](http://labs.cs50nestm.net/if_else.png)

which in C would look like:

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

Here, else captures all cases that haven’t fit into a previous condition.

{% next %}

And finally we can have more than two branches by nesting **if-else** statements:

![if_x_y](http://labs.cs50nestm.net/if_else_if.png)

{% next %}

Again, the translation to C looks very similar:

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

Note that in C, to compare two values, we need to use `==`, double equal signs. You might remember from previous labs that the single `=` sign represents assignment.

{% next %}

### The `switch` Statement

Another type of conditional we can use in C is the `switch` statement, which takes one variable, and defines what
code should run based on which case the variable matches.

An example of using `switch` is shown in the following block of code where the variable `grade` is already defined as a `char` and we want to print out the message, "Excellent!" if `grade` is an 'A', "Good!" if `grade` is a 'B', "Passing" if `grade` is a 'C' and "Better try again!" if `grade` is anything else:

```c
switch (grade)
{
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Good!\n");
        break;
    case 'C':
        printf("Passing\n");
        break;
    default;
        printf("Better try again!\n");
}
```
The `default` case is used to catch anything that doesn't match `'A'`, `'B'` or `'C'`.

Note also that code within cases should end with `break;` so that the program knows to stop
executing code and go to the end of the switch statement.

The switch statement can only be used to determine an exact match. It does not work with ranges of values.

{% next %}

### The Ternary Operator

The **ternary operator** is a third type of condition. The ternary operator takes an expression, and evaluates to one value if the expression is `true`, and another value if it is `false`.

For example, if we want to set the variable `min` to either `a` or `b` depending on which has the lower value (assuming that all three variables have already been declared, and that `a` and `b` have assigned values) we could write:

```c
if (a < b)
{
    min = a;
}
else
{
    min = b;
}
```

or we can use the ternary operator and write:

```c
min = (a < b) ? a : b;
```

which says if `a < b` is true, then set `min` to `a`, else, set `min` to `b`.

{% next %}


## Combining Boolean Expressions

We can combine Boolean expressions by using the **logical operators**.  `&&` is the logical **AND** operator: it will evaluate to `true` if both expressions on either side of it are true. `||` is the logical **OR** operator: it evaluates to `true` if at least one of the two expressions on either side is true. And `!`, the logical **NOT** operator, evaluates to the opposite of whatever the expression after it, evaluates to.

We can now execute a block of code only if multiple conditions are true as in:

```c
if (age > 12 && age < 20)
{
    printf("You are officially a teenager!\n");
}
```

Note that the the two conditions are combined inside of the parentheses.

## Your Turn!

Complete the code on the right by adding one or more conditional statements to print out only one phrase, depending on the grade that's input.

Then test your code by entering inputs that are ints, floats, strings, and ints but that are outside the expected range (like 1000)!

[For more info, download the CS50 Boolean Expressions Reference Sheet](https://ap.cs50.school/assets/pdfs/unit1/boolean_expressions.pdf)

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
