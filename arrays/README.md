# Arrays and Strings

In this lab you will learn:

- What is an array
- How we create and use arrays
- Why a for loop is so useful for arrays and strings

## What is an Array?

An array is a type of data structure in C that can hold multiple values, of the same type, in one variable. There are many reasons we may want to do this. Say, for instance, we want to get the average grade for a class of 30 students. We can create 30 variables, get user input for each of these, add them up and divide by 30. 

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

We then access individual values in student by using square bracket notation with an index that ranges from 0 up to, but not including 30. Arrays in C are zero-indexed, meaning the first item in the array always has an index of zero.

Once our array is declared, we an prompt for grades like this:
```c
student[0] = get_float("Enter a grade for student0: ");
student[1] = get_float("Enter a grade for student1: ");
student[2] = get_float("Enter a grade for student2: ");
...

or even better, we can prompt 30 times for input using a loop:

```c
for (int i = 0; i < 30; i++)
{
  student[i] = get_float("Enter a grade for student %i", i);
}
```



[Download our CS50 Reference sheet on Arrays and Strings](https://ap.cs50.school/assets/pdfs/unit2/arrays_and_strings.pdf)
