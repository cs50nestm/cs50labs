# Structures and Encapsulation

In this lab you will learn:

- What structs are and why we use them
- How we create and use structs

## What is a Struct?

There are times that we want to store data that is related, but of different data types, in one variable. This bundling of data is called **encapsulation**. In other programming languages, we might do this with an object, but in C, we have something that's more basic: the **data structure** or just **struct**. 

For instance, say we want to keep track of a class of 25 students, and each student has a name, a student id number, a year, and a gpa. Up until now, the only way we could do this would be to create four arrays, one for each of these types of data. We would have to declare all four arrays, each with a size of 25, and make sure to keep them in sync, so that the same index in each refers to the same student.

We can instead group this data together in one variable using a **struct**. We can create a new data type named `student`, which has four **members**, a `string name`, an `int id`, an `int year` and a `float gpa`. In addition, we can set up our new structure without having to declare how many students there will be.

So, using **structs** we can create our own data types, which will come in very useful as we deal with more complex programming problems! 

{% next %}

## How we Create and Use Structs

We create a new struct as follows:

```c
typedef struct
{
    string name;
    int id;
    int year;
    float gpa;
}
student;
```

This defines a new data type called `student`. In fact we can create a new `student` variable in the same we we declare a new `int`: by typing the data type followed by the new variable name:

```c
student s;
```

We can then set each member of our new variable `s`, by typing:

```c
s.name = "Janice";
s.id = 12345;
s.year = 2019;
s.gpa = 4.0;
```

If we want to keep track of 25 students information, we can declare an array named `students` with a data type of `student`:

```c
student students[25];
```

We access each `student` in the `students` array the usual way with `[i]`, and use the `.name` and `.id` syntax to access particular elements within the struct. To access the name of the first student in the `student` array, we would type `students[0].name`.

{% next %}

## Your Turn

As you may have seen in lecture, David demonstrates the use of **structs** in the program `struct1.c`. The program is included on the right for your review. Our familiar `for` loop is used here to iterate through the `students` array, and access each **member** in each of the element of `students`.

Note that in David's program, he created a **header** file, named `struct.h`, to define his `student` data type. This file is then included at the top of `struct1.c`. This is a common technique used by C programmers as programs become longer and more complex.

Your job is to complete the program, `mystruct.c`, and create your own datatype, add data to a few members, and then print them out. You do not need to define your structure in a header file.

The basic definition of a new data type is already there, however please change the name of your new structure from `name_goes_here` to something of your liking.

You may declare either a single variable or an array using your new data type. If you use an array, you'll want to use a `for` loop to add and print the data for each member.

Be sure to test your code with valid data, invalid data, and corner cases!

[Download our CS50 Reference sheet on Structures and Encapsulation](https://ap.cs50.school/assets/pdfs/unit4/structures_and_encapsulation.pdf)
