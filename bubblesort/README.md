# Bubble Sort

In this lab you will learn about:

- How bubble sort works
- Computational Complexity

## What is Linear Search

A prerequisite to using search algorithms which are more efficient that linear search is to have sorted data.

One of the most basic sorting algorithms is **bubble sort**. Bubble sort works by comparing two adjacent numbers in
the list, and **swapping** them if they are **out of order**. 

![Bubble_Sort](http://labs.cs50nestm.net/bubblesort.gif)

We see that, after our first pass through the array, the numbers are not completed sorted, but the largest number, 6, is at the end. Since we start swapping from left to right, the largest number will always end up at the end.

{% next %}

The pseudocode for **bubble sort** would look like this:

```
repeat until no swaps
    for i from 0 to n-2
        if i'th and i+1'th elements out of order
            swap them
```


## Computational Complexity

The worst case scenario for **bubble sort** is a reverse ordered list (6, 5, 4, 3, 2, 1). We would need 5, or `n - 1` passes and each pass would check 5, or `n - 1` pairs of numbers. 

When comparing running time, we generally just want the term with the biggest order of magnitude, so in this case, we would say that **bubble sort** has a complexity of **O(n<sup>2</sup>)**.

{% next %}

## Your Turn

Practice writing a **linear search** algorithm by completing the function in `linear.c`. The purpose of the program is to determine if a number that is input matches any of the numbers on a particular bingo card.

The function prototype is already defined as

```c
bool linear_search(int arr[], int n, int size);
```

This tells us that the function has a return type of `bool`, meaning that the function must return `true` or `false`. When the function is called, as it is from the `main()` function, there are three arguments: `arr` the name of the array we are searching through, `n`, the element we are searching for, and `size`, the number of elements in the array.

The function definition is started after the `main()` function closes. Complete this `linear_search()` function to determine if a number that is input is, indeed, on the bingo card.

{% spoiler "Hint" %}

1. Consider using a for loop, to iterate through the array. For instance: `for (int i = 0; i < size; i++)` could work to access each element in the array.
    1. If we find a match  `arr[i] == n` we `return true`
2. When the `for` loop complets, it means we searched through till the end of the array, and didn't find a match, so `return false`    

{% endspoiler %}

Be sure to test your function by compiling and executing your program. Try a variety of inputs, including some numbers that are in the `bingo_card` array and some numbers that aren't.


[Download our CS50 Reference sheet on Linear Search](https://ap.cs50.school/assets/pdfs/unit3/linear_search.pdf)
