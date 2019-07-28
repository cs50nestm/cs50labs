# Selection Sort

In this lab you will learn about:

- How selection sort works
- Computational Complexity

## What is Selection Sort?

Let's take a look at another sorting algorithm, **selection sort**. 

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

Even though we are doing fewer swaps with **selection sort** than we are in **bubble sort**, we are looking through our array `n - 1` times, and doing up to `n - 1` swaps, so our worst case scenario involves looking at `n<sup>2</sup>` elements. Unfortunately, our best case and worst case scenarios are the same here. We wouldn't know if our array starts out sorted, since we are looking through the array one element at a time. 

{% next %}

## Your Turn

Complete the `bubble_sort()` function on the right to sort the supplied array. 

Notice that the bubble sort function has a return type of `void`. This means the function doesn't return anything. What it does do is sort the array.

The `print_array()` function is given to you to print out the array after you've sorted it, to make sure your algorithm works properly.

{% spoiler "Hint" %}

1. You might want to start this by simply using an outer `for` loop that iterates `n - 1` times, which corresponds to `n - 1` passes through the array.
2. Then use an inner `for` loop that also iterates `n - 1` times. If you use the index variable `i` here, make sure to use another variable in the `for` loop in step 1.
3. We now look at pairs of numbers. If `arr[i] > arr[i + 1]` then swap the two elements. You may need to use a temporary variable to do the swap.

{% endspoiler %}

Once you have your function sorting properly, see if you can make it more efficient! How to do this? There are two areas you might be able to improve.

1. See if you can have the function stop as soon as there are no more swaps. 

2. In a list with n elements, we would compare (n - 1) pairs in our first pass. And after our first pass, the largest element will have been swapped all the way to the right. So in our second pass, we’ll only need (n - 2) comparisons.

{% spoiler "Hint" %}

You may want to include a counter for the amount of swaps made. You can reset the counter to 0 just before you execute the inner `for` loop. After the inner loop is finished, check to see if `counter == 0`. If this is true there are no more swaps to be made and you can execute the `break` statement, which will terminate the outer loop.

{% endspoiler %}


[Download our CS50 Reference sheet on Bubble Sort](https://ap.cs50.school/assets/pdfs/unit3/bubble_sort.pdf)
