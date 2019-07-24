# Linear Search

In this lab you will learn:

- What linear search is
- Computational Complexity

## What is Linear Search

There are many important applications of searching algorithms in computer science, from looking up a name in an address book to using an internet search engine.

The most basic search algorithm is called **linear search**. This algorithm checks every element in a list, starting at the beginning and incrementing through the list until the desired element is found. In the worst case, this would take n steps, where n was the number of elements in our list, and in the best case, we would find it in the first step.

David spoke about this in lecture, using the example of searching for a number in an array. He suggested that the pseudocode might look like this. 

```
for each element in array
    if element equals what you're looking for
        return true
return false
```

Note that we only `return false` after the `for` loop has finished, meaning we checked all the values in the array.

{% next %}

## Computational Complexity

{% next %}

## Your Turn

Practice writing a **linear search** algorithm by completing the function in `linear.c`. The purpose of the program is to determine if a number that is input matches any of the numbers on a particular bingo card.

The function prototype is already defined as

```c
bool linear_search(int arr[], int n, int size);
```

This tells us that the function has a return type of `bool`, meaning that the function must return `true` or `false`. When the function is called, as it is from the `main()` function, there are three arguments: `arr` the name of the array we are searching through, the `n`, the element we are searching for, and `size`, the number of elements in the array.

The function definition is started at the end of the page. Complete this `linear_search()` function to determine if a number that is input is, indeed, on the bingo card.
