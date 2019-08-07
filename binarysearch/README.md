# Binary Search

In this lab you will learn:

- What binary search is
- Computational Complexity

## What is Binary Search?

We saw one searching algorithm earlier on, **linear search**. Though linear search can be a good solution when searching through small, unsorted data sets, for large data sets (i.e. looking up a name in a phone book) it can be quite inefficient. A much faster approach is to use a **binary search** algorithm. The trade-off however, is that the data for **binary search** must be sorted first.

With **binary search**, we are dividing the problem in half with each iteration, so that there are fewer steps required to complete our search. We see this in lecture, when David demonstrates finding a name in a phone book by tearing the book in half.

<!-- ![Linear_Search](http://labs.cs50nestm.net/linear_search.gif) -->
![Binary_Search](http://labs.cs50nestm.net/binary_search.gif)

{% next %}

The pseudocode for binary search could look like this. 

```
set min = 0 and max = n - 1
repeat while min >= max
    find middle of array
    if k is less than array[middle]
        set max to middle - 1
    else if k is greater than array[middle]
        set min to middle + 1
    else if k is equal to array[middle]
        you found k in the array (return true)
k is not in the array (return false)
```

Note that we only `return false` after the `while` loop has finished, meaning we checked all the values in the array.


## Computational Complexity

Binary search has what we call a logarithmic running time, **O(log n)**, since we are dividing the problem in half each time.

{% next %}

## Your Turn

Practice writing a **binary search** algorithm by completing the function in `binary.c`. 
The function prototype is already defined as

```c
bool bin_search(int arr[], int n, int n);
```

This tells us that the function has a return type of `bool`, meaning that the function must return `true` or `false`. When the function is called, as it is from the `main()` function, there are three arguments: `arr` the name of the array we are searching through, `n`, the element we are searching for, and `n`, the number of elements in the array.


{% spoiler "Hint" %}

  

{% endspoiler %}



[Download our CS50 Reference sheet on Binary Search](https://ap.cs50.school/assets/pdfs/unit3/binary_search.pdf)
