# Printf Placeholders

## What is a Placeholder?

One way of using `printf` is to simply type some text, surrounded by double quotes, inside of parentheses as in:

```c
printf("hello, world\n");
```

The `\n` is a special character that represents "new line". When this line of code is executed inside of a program, it will output

```
hello, world
```

But what if you want to print a number, or something other than a pre-defined string? That's where the strange looking syntax (`%i`, `%s`, etc.) you may have already seen comes in!

These symbols are "placeholders" for data stored in a variable. They are also refered to as "format strings" since they format the value that a variable holds, to be printed inside of a string.

{% next %}

## Using Placeholders with `printf`

The placeholder is used to hold the place for the value that you want to print. For example

```c
printf("hello, %s\n", name);
```

means to take the value of the string variable, `name`, and substitute this value for the placeholder, `%s`.

So if the value stored in the variable `name` is "Zamyla", this line of code would output

```
hello, Zamyla
```

Another thing to keep in mind is that `printf` does not automatically put line breaks at the end of a line, which is why you'll want to put "\n" as the last character inside the string that `printf` takes to tell your program to print a line break.

{% next %}

## Different Placeholders for Different Data Types

Different data types use different format strings. Here is a list for reference.

| Data Type     | Format Specifier | Example |
| ------------- |------------------| ------- |
| int           | %i or %d         | printf("Age: %i\n", age);|
| long long     | %lli             | printf("My ID number is %lli\n", id_number);|
| float, double | %f               | printf("The value of pi is %f\n", pi); |
| string        | %s               | printf("hello, %s\n", name);|
| char          | %c               | printf("Enter Y or N: %c\n", agreement);|

## Specifying How Many Decimal Places

You'll notice that `%f` is the placeholder for both floats and doubles. It automatically defaults to printing exactly six places after the decimal point. You can have it print more or fewer places after the decimal, with a bit of extra syntax.

To round one place after the decimal point you would use `%.1f`, two places after the decimal, `%.2f`, 55 places after the decimal `%.55f`, etc.

{% next %}


