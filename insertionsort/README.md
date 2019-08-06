# Insertion Sort

In this lab you will learn about:

- How insertion sort works
- Computational Complexity

## What is Insertion Sort?

Another sorting algorithm that again has different trade-offs is **insertion sort**. Rather than multiple iterations over the list, **insertion sort** splits the array into two parts: a sorted portion and an unsorted portion. It builds the sorted portion one element at a time by looking at each element in the unsorted portion and **inserting** it into the sorted portion of the array.

<!--<img src="http://labs.cs50nestm.net/bubblesort.gif" width="450">-->
![Insertion_Sort](http://labs.cs50nestm.net/insertion_sort.gif)

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

Though **insertion sort** does not require iterating through the array multiple times, as did our other sorting algorithms, it does require significant shifting of elements in the **sorted** portion of the array, especially with the elements are in reverse order. So the time complexity of **insertion sort** is still **O(n<sup>2</sup>)**, however the best case scenario is on the order of **n** when the elements are already sorted.

{% next %}

## Your Turn

Complete the `insertions_sort()` function on the right to sort the supplied array. 

Notice that the insertion sort function has a return type of `void`. This means the function doesn't return anything. What it does do is sort the array.

The `print_array()` function is given to you to print out the array after you've sorted it, to make sure your algorithm works properly.

{% spoiler "Hint" %}

1. You might want to start this by simply using an outer `for` loop that begins at `i = 1` and iterates through to the end of the array.
2. Since we assume that elements up to `arr[i - 1]` are sorted, and `arr[i]` is the next unsorted element of the array, you might temporarily store the value of `arr[i]` in a new variable for use later on (`element = arr[i]`). Since we'll be moving through the sorted portion of the array to see where the variable `elemement` will fit in, save the current index, `i` in a new variable `j`.
3. Now you'll need to look through the sorted portion of the array, moving from right to left, to find a value that is less than or equal to `element`. As long as the condition `j > 0 && arr[j - 1] > element` is true, (consider using this conditoin with a `while` loop) shift each value in the sorted array to the right, by setting it's value to the value of the element one space to the left, `arr[j] = arr[j - 1]`. Now decrease `j` by one to look at the next element in the next iteration of your `while` loop.
4. Finally when this condition is no longer true, you've found the correct spot in the sorted portion of the array for `element`. You can now set it's value into the proper spot in the sorted array, `arr[j] = element`.

{% endspoiler %}

Nothing much you can do to optimize here, as we were able to do with bubble sort.


[Download our CS50 Reference sheet on Insertion Sort](https://ap.cs50.school/assets/pdfs/unit3/insertion_sort.pdf)
