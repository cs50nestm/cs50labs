# Merge Sort

In this lab you will learn about:

- How merge sort works
- Computational Complexity

## What is Merge Sort?

Up until now, the three sorting algorithms we've looked at, bubble sort, selection sort and insertion sort all have a worst case run time of O(n<sup>2</sup>). **Merge sort** is a fundamentally different kind of algorithm, with far superior running time, particularly for large data sets. Merge sort works by recursively breaking an array into subarrays, then merging the subarrays back together.

To understand how this works, let’s take a look at the following pseudocode:

```
if number of elements < 2
    return
else
    sort left half of elements
    sort right half of elements
    merge sorted halves
```

## Computational Complexity

Since we are dividing the problem in half each time, this would imply log *n* divisions. And as are looking at all *n* elements to merge them, we can estimate that the time complexity of **merge sort** would be **O(*n* log *n*)**.

Similar to selection sort, the best and worst case scenearios have the same runtime. Since there is no way of knowing up front if an array is already sorted, so merge sort would have to process the entire array in the same way as it would with an unsorted array.

## Your Turn





[Download our CS50 Reference sheet on Merge Sort](https://ap.cs50.school/assets/pdfs/unit4/merge_sort.pdf)
