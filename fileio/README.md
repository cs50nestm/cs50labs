# File I/O

In this lab you will learn:

- What we mean by File I/O
- How to read and write files in C
- Why we need file extensions

## What is File I/O?

Up until now, when our program is finished, any data resulting from our program is gone. In order to have **persistent data**, that continues to exist after our program is finished running, we need to use some basic **file I/O** (input/output) functions, that are available in the `stdio.h` library.

Data is stored in the form of **files** in a format the computer can understand. We use file references, called **file pointers** to interact with files in C. We use a statement such as:

```c
FILE *ptr = fopen("document1.txt", "r");
```

to get a file pointer, `ptr`, that allows us to read information from the file `document1.txt`. We could open, `document2.txt` for writing by:

```c
FILE *ptr2 = fopen("document2.txt", "w");
```

getting a file pointer, `ptr2` to write to this new file.

When we write to a file, we overwrite another file with the same name. In order to add to a file we use append like this:

```c
FILE *ptr3 = fopen("document3.txt", "a");
```

which is like writing but done at the end of a file.

We can then use our file pointer with `fprintf()` to write to file, and `fgetc()` to read from a file character by character.

{% next %}

## Reading and Writing files

To write to a file, we use `fprintf()`, in the same way that we use `printf()`, only specifying the file pointer as the first argument. The operation to get this file pointer must have used the parameter `"w"` or you will suffer an error:

```c
fprintf(ptr2, "Hello, world!\n");
```

To print a variable, we use placeholders just as we do in `printf()`.

```c
fprintf(ptr2, "Hello, %s\n", name);
```

After we finish writing to a file, we must close it by using `fclose()`:

```c
fclose(ptr2);
```

To read from a file we can use `fgetc()`. This allows us to read a character at a time until we get to `EOF` the end of the file `char`.

This is often used in a loop in order to read an enter file. This snippet of code will read a file and print out each `char` to our terminal window:

```c
FILE *ptr = fopen("document1.txt", "r");
char c = fgetc(ptr);
while (c != EOF)
{
     printf("%c", c);
     c = fgetc(ptr);      
}
fclose(ptr);
```

{% next %}

## Error Checking

To avoid getting errors when using file I/O functions, we should always make sure that `fopen()` was successful. This could happen when trying to read from a file that doesn't exist. When `fopen()` is not successful it returns a `NULL` pointer. We can test for this as follows:

```c
FILE *ptr = fopen("document1.txt", "r");
if (ptr == NULL)
{
    printf("Error opening file!\n");
    return 1;  
}
```

## File Extensions

Since we can store a variety of media in files, such as audio, text, movies and pictures, we need to use appropriate **file extensions**. These allow the computer to understand how to interpret the bits and bytes in a particular file.

{% next %}

## Your Turn

Complete the program on the right that takes two command line arguments — a source file and a destination file — and copies the contents of the source to the destination. Specifically, we have provided the first page of Anna Karenina, in `anna.txt`, for you to copy. Create a new file `copy.txt` for your copy. Follow the commented pseudocode in the file.

{% spoiler "Hint" %}

1. Get two file pointers using `fopen()`, one for reading and one for writing.
2. Be sure to use code as above to check that both files opened properly.
3. Use a `while` loop to read one `char` at a time from the source file, `anna.txt`.
4. Use `fprintf()` to write to `copy.txt` one `char` at a time. You may use something like `fprintf(dest, "%c", c)` to do this.

{% endspoiler %}

[Download our CS50 Reference sheet on File I/O](https://cs50.harvard.edu/ap/2020/assets/pdfs/file_io.pdf)
