# Insertion Sort

In this lab you will learn about:

- How insertion sort works
- Computational Complexity

## What is Insertion Sort?

Another sorting algorithm that again has different trade-offs is **insertion sort**. Rather than multiple iterations over the list, **insertion sort** splits the array into two parts: a sorted portion and an unsorted portion. It builds the sorted portion one element at a time by looking at each element in the unsorted portion and **inserting** it into the sorted portion of the array.

<!--<img src="http://labs.cs50nestm.net/bubblesort.gif" width="450">-->
## INSERTION SORT ANIMATION TO COME

While this can be relatively efficient for small arrays, the trade-off for larger arrays is that many elements must be shifted around to created the sorted portion of the array.

{% next %}

The pseudocode for **insertion sort** would look like this:

```
for i from 1 to n-1
    call 0'th through i-1'th elements the "sorted side"
    remove i'th element
    insert it into sorted side in order
```


## Computational Complexity



{% next %}

## Your Turn

Complete the `insertions_sort()` function on the right to sort the supplied array. 

Notice that the insertion sort function has a return type of `void`. This means the function doesn't return anything. What it does do is sort the array.

The `print_array()` function is given to you to print out the array after you've sorted it, to make sure your algorithm works properly.

{% spoiler "Hint" %}

1. You might want to start this by simply using an outer `for` loop that begins at `i = 1` and iterates through to the end of the array.
2. 

{% endspoiler %}





[Download our CS50 Reference sheet on Insertion Sort](https://ap.cs50.school/assets/pdfs/unit3/insertion_sort.pdf)
