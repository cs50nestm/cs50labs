# Linear Search

In this lab you will learn about:

- Linear search
- Computational complexity

## What is Linear Search?

There are many important applications of searching algorithms in Computer Science, from looking up a name in an address book to using an internet search engine.

The most basic search algorithm is called **linear search**. This algorithm checks every element in a list, starting at the beginning and incrementing through the list until the desired element is found. In the worst case, this would take *n* steps, where *n* was the number of elements in our list, and in the best case, we would find it in the first step.

If we were looking for the number 50 in an array:

![Linear_Search](http://labs.cs50nestm.net/linear_search.gif)

{% next %}

The pseudocode might look like this.

```
for each element in array
    if element equals what you're looking for
        return true
return false
```

Note that we only `return false` after the `for` loop has finished, meaning we checked all the values in the array.


## Computational Complexity

When we talk about the complexity of an algorithm, we are talking about the steps an algorithm takes. Since the worst case for **linear search** means having to look at every element in the list, or processing `n` steps in a list of `n` elements, we say the computational complexity is **O(n)**.

So we can see that **linear search** is not usually an efficient algorithm, particularly for large data sets. In David's phone book example, we might have to step through hundreds or thousands of pages to find one name. However, an advantage of linear search is that it does not required sorted data. If we are looking through a short list, and the list is unsorted, it may be more efficient (take fewer steps) to just check each item, than to sort the list first.

{% next %}

## Your Turn

Practice writing a **linear search** algorithm by completing the function in `linear.c`. The purpose of the program is to determine if a number that is input matches any of the numbers on a particular bingo card.

The function prototype is already defined as:

```c
bool linear_search(int arr[], int n, int size);
```

This tells us that the function has a return type of `bool`, meaning that the function must return `true` or `false`. When the function is called, as it is from the `main()` function, there are three arguments: `arr` the name of the array we are searching through, `n`, the element we are searching for, and `size`, the number of elements in the array.

The function definition is started after the `main()` function closes. Complete this `linear_search()` function to determine if a number that is input is, indeed, on the bingo card.

{% spoiler "Hint" %}

1. Consider using a for loop, to iterate through the array. For instance: `for (int i = 0; i < size; i++)` could work to access each element in the array.
    1. If we find a match  `arr[i] == n` we `return true`
2. When the `for` loop completes, it means we searched through till the end of the array, and didn't find a match, so `return false`    

{% endspoiler %}

Be sure to test your function by compiling and executing your program. Try a variety of inputs, including some numbers that are in the `bingo_card` array and some numbers that aren't.


[Download our CS50 Reference sheet on Linear Search](https://ap.cs50.school/assets/pdfs/unit3/linear_search.pdf)
