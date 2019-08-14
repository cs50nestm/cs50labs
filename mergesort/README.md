# Merge Sort

In this lab you will learn about:

- How merge sort works
- Computational Complexity

## What is Merge Sort?

Up until now, the three sorting algorithms we've looked at, bubble sort, selection sort and insertion sort, have all had a worst case run time of O(n<sup>2</sup>). **Merge sort** is a fundamentally different kind of algorithm, with far superior running time, particularly for large data sets. Merge sort works by recursively breaking an array into **subarrays**, then merging the subarrays back together.

![Merge_Sort](http://labs.cs50nestm.net/merge_sort.gif)

To understand how this works, let’s take a look at the following pseudocode:

```
if number of elements < 2
    return
else
    sort left half of elements
    sort right half of elements
    merge sorted halves
```

{% next %}

## Computational Complexity

Since we are dividing the problem in half each time, this would imply log *n* divisions. And as are looking at all *n* elements to merge them, we can estimate that the time complexity of **merge sort** would be **O(*n* log *n*)**.

Diagrams that attempt to explain how merge sort works don't often capture the trade-off of memory usage vs. processing time very accurately.

<!--![Merge_Sort_Diagram](https://upload.wikimedia.org/wikipedia/commons/e/e6/Merge_sort_algorithm_diagram.svg)-->
<img src="https://upload.wikimedia.org/wikipedia/commons/e/e6/Merge_sort_algorithm_diagram.svg" width="450px">

Because of the limitations of visualizing how an array can be divided into subarrays in a static image, it appears as seven times as much memory must be used for this algorithm as for less efficient algorithms such as bubble sort. However by observing the animation above, we can see that at most twice as much memory would be utilized, which is not terribly significant for most applications.

Similar to selection sort, the best and worst case scenarios for merge sort have the same runtime. Since there is no way of knowing up front if an array is already sorted, so merge sort would have to process the entire array in the same way as it would with an unsorted array.

{% next %}

## Your Turn

Complete the `merge_sort()` function in the program on the right. The `merge()` function is already there, so you don't have to worry about how to merge two halves of an array into one.

The `merge_sort()` function takes three arguments and has a `void` return type, meaning it does not return a value, but rather sorts the array. The first argument `arr[]` is the name of the array it will work with. When you call the `merge_sort()` function, you would provide the name of the array (`arr`) as a parameter without the square brackets. The second and third arguments are the left and right indices that specify the section of the array, or subarray, that will eventually be merged.

{% spoiler "Hint" %}

Using the pseudocode above for inspiration, first check to see if there is more than one element in the array or subarray that the function is getting as an input. You can use the arguments `left` and `right` to figure this out. These represent the left and right indices of the subarray given as input.

Then find the middle of the subarray as the average of the right and left indices and save this in a new variable.

You'll now recursively call the `merge_sort()` function twice, first with the left half of the subarray (left to middle) and then with the right half of the subarray (middle + 1 to right).

Finally, call the `merge()` function, passing it the name of the array, the left index, the middle, and the right index. This function will merge the two halves of the array you are passing it.

{% endspoiler %}

[Download our CS50 Reference sheet on Merge Sort](https://ap.cs50.school/assets/pdfs/unit4/merge_sort.pdf)
