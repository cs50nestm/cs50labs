# Structures and Encapsulation

In this lab you will learn:

- What structs are and why we use them
- How we create and use structs

## What is a Struct

There are times that we want to store data that is related, but of different data types, in one variable. This bundling of data is called **encapsulation**. In other programming languages, we might do this with an **object**, but in C, we have something that's more basic: the **data structure** or just **struct**. 

For instance, say we want to keep track of a class of 25 students, and each student has a name, a student id number, a year, and a gpa. Up until now, the only way we could do this would be to create four arrays, one for each of these types of data. We would have to declare all four arrays, each with a size of 25, and make sure to keep them in sync, so that the same index in each refers to the same student.

We can instead group this data together in one variable using a **struct**. We can create a new data type named **student**, which has four **members**, a `string name`, an `int id`, an `int year` and a `float gpa`. In addition, we can set up our new structure without having to declare how many students there will be.

So, using **structs** we can create our own data types, which will come in very useful as we deal with more complex programming problems! 

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



[Download our CS50 Reference sheet on Structures and Encapluation](https://ap.cs50.school/assets/pdfs/unit4/structures_and_encapsulation.pdf)
