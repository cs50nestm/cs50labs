# Arrays and Strings

In this lab you will learn:

- What is an array
- How we create and use arrays
- Why a for loop is so useful for arrays and strings

## What is an Array?

An **array** is a type of data structure in C that can hold multiple values, of the same type, in one variable. There are many reasons we may want to do this. Say, for instance, we want to get the average grade for a class of 30 students. We can create 30 variables, get user input for each of these, add them up and divide by 30. 

```c
float student1 = get_float("Enter a grade for student1: ");
float student2 = get_float("Enter a grade for student2: ");
float student3 = get_float("Enter a grade for student3: ");
...
```

We can see prety quickly that it's going to get pretty boring typing in so much repetitive code!

Instead, we can use an array, named `student` that can store 30 floating point values.

```c
float student[30];
```

{% next %}

We then access individual values in student by using square bracket notation with an index that ranges from 0 up to, but not including 30. Arrays in C are **zero-indexed**, meaning the first item in the array always has an index of zero.

Once our array is declared, we an prompt for grades like this:
```c
student[0] = get_float("Enter a grade for student0: ");
student[1] = get_float("Enter a grade for student1: ");
student[2] = get_float("Enter a grade for student2: ");
...
```

or even better, we can prompt 30 times for input using a loop:

```c
for (int i = 0; i < 30; i++)
{
  student[i] = get_float("Enter a grade for student %i", i);
}
```

where we use the variable `i` both to control the **for loop**, as well as for the index into our array. It just so happens that `i` starts at 0 and increases by one until it gets to 29, corresponding perfectly to each index in our array! This is called "iterating" through an array.

{% next %}

## Strings

Arrays in C can store values of any data type, as long as all elements in the array are of the same type. In fact, a **string** in C is really an **array of chars**.

When we declare a string in C as in

```c
string course = "CS50";
```

we are creating a array named `course` with one character at each index. There is one additional character at the end of every string in C: the null-terminator, represented by `'\0'`. The null-terminator is the character that tells a string that the string is over, and that there are no more characters in the string. So this array will have five spots for chars, indexed 0 through 4.

We can index into this string in the same way we index into any array, using square bracket notation. So `course[0]` has a value of `'C'`, `coures[1]` a value of `'S'`, ending with `course[4]` having a value of `'\0'`. Even though `'\0'` looks like two characters, our program see it as one char.

Since a string is an array, we can iterate through a string using a for loop as well. There is a special function `strlen()` we can use which gives us the length of a string. To use this function, we need to write `#include <string.h>` at the top of our program to access the `string.h` library.

Our for loop to access each character of our string, one char at a time would look like:

```c
for (int i = 0; i < strlen(course); i++)
{
  printf("%c\n", course[i]);
}
```

Here we print out each letter stored in the string variable `course` on its own line.

[Download our CS50 Reference sheet on Arrays and Strings](https://ap.cs50.school/assets/pdfs/unit2/arrays_and_strings.pdf)
