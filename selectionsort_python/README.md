# Selection Sort

In this lab you will learn about:

- How selection sort works
- Computational Complexity

## What is Selection Sort?

Bubble sort sure involved a lot of swapping! Let's take a look at another sorting algorithm, **selection sort**. 

![Selection_Sort](https://raw.githubusercontent.com/cs50nestm/cs50labs/2019/selectionsort/selection_sort.gif)

First, we go over the entire list, and look for the smallest number. Then we select that number, and put it at the front of our list, swapping it with whatever was originally at that position. We then look through the list for the second smallest number and swap this with the element that is second from the left in our list.

As we continue, we build a sorted list, one element at a time.

{% next %}

The pseudocode for **selection sort** would look like this:

```
for i from 0 to n-1
    find smallest element between i'th and n-1'th
    swap smallest with i'th element
```

## Computational Complexity

Even though we are doing fewer swaps with **selection sort** than we are in **bubble sort**, we are looking through our list `n - 1` times, and doing up to `n - 1` swaps, so our worst case scenario involves looking at n<sup>2</sup> elements. Unfortunately, our best case and worst case scenarios are the same here. We wouldn't know if our list starts out sorted, since we are looking through the list one element at a time. So using **big O** notation, we can say that **selection sort** has a running time of **O(n<sup>2</sup>)**.

{% next %}

## Your Turn

Complete the `selection_sort()` function on the right to sort the supplied list. 


{% spoiler "Hint" %}

1. You might want to start this by simply using an outer `for` loop that iterates `n - 1` times, which corresponds to `n - 1` passes through the list. You may want to use `i` as your loop counter variable.
2. Create a variable, `min`, to keep track of the index of the element with the smallest value. Initialize its value to `i`.
3. Create an inner `for` loop. If you use `j` for your counter, you could start `j` at `i + 1` and repeat through the last element in the list.
4. Compare each element in the list to the element stored at index, `min`. If `arr[j] < arr[min]`, assign to `min` the value of `j`, since the element at this index is the smallest so far.
5. After this inner `for` loop complete, the value stored in `min` will be the index of the smallest element in the unsorted portion of the list. Now it's time to swap `arr[min]` with `arr[i]`.

{% endspoiler %}

Once you have your function sorting properly, is there something else you can do to make it more efficient? Does it make sense to use a counter like in bubble sort?

While it might seem like a good idea to check if the entire list is sorted after every successful swap to avoid additional passes through the array, this would come at a cost, because then there would be even more comparisons to be made. 

This is why we say that the worst case and best case scenarios for **selection sort** are both on the order of n<sup>2</sup>.

[Download our CS50 Reference sheet on Selection Sort](https://cs50.harvard.edu/ap/2020/assets/pdfs/selection_sort.pdf)
