# Stack

In this lab you will learn about:

- The definition of a Stack data structure
- How to implement a Stack 

## What is a Stack

A stack is a data structure that is similar in spirit to a pile of cafeteria trays.

(https://raw.githubusercontent.com/csbaxter/tutorials/2020/stack/trays.jpg)

Think about the trays in the cafeteria: when the dining staff put trays out before meals, they pile them from the bottom to the top, and then you take the top-most tray when you arrive. The last tray that the staff put on the piles is the first one taken from the pile.

Similarly, with stacks, the last element inserted will be the first element retrieved. We'll refer to this pattern of insertion and retrieval as **"last-in, first-out,"** or **LIFO** for short.


A stack's two primary operations are called `push` and `pop`. push places a new element on the top of the stack (like a dining hall's tray or a function's stack frame), and pop retrieves the topmost element from the stack, decrementing the stack's size in the process.


Like queues (and unlike arrays), stacks typically don't allow access to elements in the middle.

One of the most basic sorting algorithms is **bubble sort**. Bubble sort works by comparing two adjacent numbers in
the list, and **swapping** them if they are **out of order**. 

![Bubble_Sort](https://raw.githubusercontent.com/cs50nestm/cs50labs/2019/bubblesort/bubble_sort.gif)

We see that, after our first pass through the array, the numbers are not completely sorted, but the largest number, 6, is at the end. Since we start swapping from left to right, the largest number will always end up at the end.

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

To submit this tutorial please use:

`submit50 csbaxter/problems/2021/x/tutorials/bubble`

[Download our CS50 Reference sheet on Bubble Sort](https://cs50.harvard.edu/ap/2020/assets/pdfs/bubble_sort.pdf)
