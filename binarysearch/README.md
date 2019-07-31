# Binary Search

In this lab you will learn:

- What binary search is
- Computational Complexity

## What is Binar Search?

Now that we know how to write a sorting algorithm, we can take a look at **binary search**.

...

David spoke about this in lecture, using the example of searching for a name in the phone book. 

<!-- ![Linear_Search](http://labs.cs50nestm.net/linear_search.gif) -->
## BINARY SEARCH ANIMATION TO COME!

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


{% next %}

## Your Turn

Practice writing a **binary search** algorithm by completing the function in `binary.c`. 
The function prototype is already defined as

```c
bool bin_search(int arr[], int n, int size);
```

This tells us that the function has a return type of `bool`, meaning that the function must return `true` or `false`. When the function is called, as it is from the `main()` function, there are three arguments: `arr` the name of the array we are searching through, `n`, the element we are searching for, and `size`, the number of elements in the array.

The function definition is started after the `main()` function closes. Complete this `linear_search()` function to determine if a number that is input is, indeed, on the bingo card.

{% spoiler "Hint" %}

  

{% endspoiler %}



[Download our CS50 Reference sheet on Binary Search](https://ap.cs50.school/assets/pdfs/unit3/binary_search.pdf)
