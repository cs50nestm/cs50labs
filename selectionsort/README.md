# Selection Sort

In this lab you will learn about:

- How selection sort works
- Computational Complexity

## What is Selection Sort?

Bubble sort sure involved a lot of swapping! Let's take a look at another sorting algorithm, **selection sort**. 

<!-- ![Bubble_Sort](http://labs.cs50nestm.net/bubblesort.gif) -->
<img src="http://labs.cs50nestm.net/bubblesort.gif" width="450">

First, we go over the entire list, and look for the smallest number. Then we **select** that number, and put it at the front of our list, swapping it with whatever was originally at that position. We then look through the list for the second smallest number and swap this with the element that is second from the left in our list.

As we continue, we build a sorted list, one element at a time.

{% next %}

The pseudocode for **selection sort** would look like this:

```
for i from 0 to n-1
    find smallest element between i'th and n-1'th
    swap smallest with i'th element
```

## Computational Complexity

Even though we are doing fewer swaps with **selection sort** than we are in **bubble sort**, we are looking through our array `n - 1` times, and doing up to `n - 1` swaps, so our worst case scenario involves looking at `n<sup>2</sup>` elements. Unfortunately, our best case and worst case scenarios are the same here. We wouldn't know if our array starts out sorted, since we are looking through the array one element at a time. So using **big O** notation, we can say that **selection sort** has a running time of **O(n<sup>2</sup>)**.

{% next %}

## Your Turn

Complete the `selection_sort()` function on the right to sort the supplied array. 

Note that this function has a return type of `void`. This means the function doesn't return anything. What it does do is sort the array.

The `print_array()` function is given to you to print out the array after you've sorted it, to make sure your algorithm works properly.

{% spoiler "Hint" %}

1. You might want to start this by simply using an outer `for` loop that iterates `n - 1` times, which corresponds to `n - 1` passes through the array.
2. 

{% endspoiler %}

Once you have your function sorting properly, is there something else you can do to make it more efficient? Does it make sense to use a counter like in bubble sort?

While it might seem like a good idea to check if the entire array is sorted after every successful swap to avoid additional passes through the array, this would come at a cost, because then there would be even more comparisons to be made. This is why we say that the worst case and best case scenarios for **selection sort** are both on the order of `n<sup>2</sup>`.


[Download our CS50 Reference sheet on Selection Sort](https://ap.cs50.school/assets/pdfs/unit3/selection_sort.pdf)
