# Operators

In this lab you will learn:

- How math operators work in C
- How and when to use the remainder operator
- The different ways of using assignment operators

## Arithmetic Operators

The addition (`+`), subtraction (`-`), and multiplication (`*`) operators work the same way in C as they do in your math class. No big surprises here. 

We can write

```c
10 * 3
```

and of course the result would be `30`. 

We can use these operators with numbers or variables. If I've already assigned the value `10` to an integer varialbe `a`, this
is the same exact operation as above.

```c
a * 3;
```

However, this is not storing the resulting value of `30` in anything. The value of `a` is not changed. It's value is just used as part of this calculation.




{% next %}

## Native Data Types

Let's start with the data types you will use most frequently.

### int

An `int` is a data type which represents an **integer**: its value could be a **positive or negative whole number, or zero**. Numbers like 5, 28, -3, and 0 can be represented as ints, but numbers like 2.8, 5.124, and -8.6 cannot. 

When an `int` is declared, the computer allocates 4 bytes, or 32 bits worth of space for that variable. This means that there are 2<sup>32</sup> (more than 4 billion) possible integers that can be represented as an `int`. Since this includes both positive numbers, negative numbers and zero, the values that an `int` can hold range from -2<sup>31</sup> to (2<sup>31</sup> - 1).

If a program tries to store a number larger than 2,147,483,647, or 2<sup>31</sup> - 1, in an `int`, an error would be generated at run time, since the value would "overflow" the capacity of this data type. This error is called an **integer overflow** error.

The CS50 user input function for an `int` would be `get_int`. To declare a new int and ask for input we could write

```c
int age = get_int("Enter your age: );
```

### long long

A `long long` is similar to an `int`, except that it uses 8 bytes, or 64 bits, of storage, allowing numbers in the range from -2<sup>63</sup> to (2<sup>63</sup> - 1).

The user input function for a `long long` would be `get_long_long`. Example code would look like

```c
long long ccn = get_long("Enter a credit card number: ");
```

{% next %}

### float

To store numbers that are **not whole numbers**, C uses a data type known as a `float`, for floating-point number. A float uses 4 bytes to store negative and positive numbers that contain decimals, such as 5.12 or -17.32. 

Since there are an infinite number of numbers with decimals, and the computer has a finite number of bits, the computer cannot represent every floating point number with 100% accuracy. A `float` only has about six digits of precision. This can be a problem when more accuracy is needed. This problem is called **floating point imprecision**.

Example input with `get_float` could look like

```c
float change = get_float("Enter the change in dollars and cents: ");
```

### double

A `double` also stores numbers with decimals, but with more precision, since it uses 8 bytes, rather than 4 bytes, of storage.

```c
double pi = get_float("Enter pi to 10 decimal places: ");
```

### char

A `char` is a data type which represents a **single character** of text and is stored in a single byte of memory. A `char` in C is surrounded by **single quotation marks**.  It's value could be a lowercase letter like 'a', uppercase letter like 'B', a symbol like '!' or the new line character '\n' which counts as a single character.

{% next %}

## CS50 Library Data Types

Data types availabe through the CS50 Library are

### string

The `string` data type holds **text**. A `string` variable is different than the data types listed above, since it actually holds the memory location of a series of chars, or chacters that make up the string. 

Strings in C must be surrounded by double quotes (`"`). For instance

```c
string name = "Zamyla";
```

To have a user input string data, we can use the `get_string` function as in

```c
string name = get_string("Enter your name: ");
```

### bool

A `bool` is a data type that stores one of only two possible values: **true or false**. It could be used to control the flow of code.

For instance

```c
bool game_started = true;
bool game_finished = false;
```

{% spoiler "More on Data Types" %}

{% video https://www.youtube.com/watch?v=Fc9htmvVZ9U %}

{% endspoiler %}

{% next %}

## Practice Using These Data Types

In the text editor to the right, you will see comments (lines starting with `//`) explaining what each missing line of code should be doing. Your job is to **complete this missing code**, to **declare and get user input** for each of these data types shown above. 

The first of these is already done for you.

Be sure to use the same variable names as the comments suggest, so that `printf` works properly to print out these values, later on in the program.

When you are done, **compile** your code by typing

```
make datatypes
```

at the `$` prompt.

If you see any errors, try to look for hints in the rather cryptic hints given. If you have a hard time finding the error, try typing

```
help50 make datatypes
```
at the command line for additional hints.

Remember each time you correct an error you must compile your code again to execute the most recent version of your program.

Finally **execute** your program with

```
./datatypes
```

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
style50 datatypes.c
```

When your program compiles and passes the style test, you have completed Data Types!

<!-- ## Submit

To submit your code, execute

```
submit50 <slug>
```

Your submission should be graded for corretness and style withing a few minutes on [cs50.me](https://cs50.me/) -->

[For more info on data types, download the CS50 Data Types Reference Sheet](https://ap.cs50.school/assets/pdfs/unit1/data_types.pdf)
