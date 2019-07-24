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

The computational complexity of **linear search** would be **O(n)**. What that means is that the worst case sceneario, if the list is `n` elements long, the algorithm might have to execute as many as `n` steps. 

It is for this reason, that **linear search** is not usually an efficient algorithm. In David's phone book example, we might have to browse through hundreds of pages to find one name. However, an advantage of **linear sort** is that it does not required **sorted data**. If we are looking through a short list, and the list is unsorted, it may be more efficient (take fewer steps) to just check each item, than to sort the list first.

{% next %}

## Your Turn

Practice writing a **linear search** algorithm by completing the function in `linear.c`. The purpose of the program is to determine if a number that is input matches any of the numbers on a particular bingo card.

The function prototype is already defined as

```c
bool linear_search(int arr[], int n, int size);
```

This tells us that the function has a return type of `bool`, meaning that the function must return `true` or `false`. When the function is called, as it is from the `main()` function, there are three arguments: `arr` the name of the array we are searching through, `n`, the element we are searching for, and `size`, the number of elements in the array.

The function definition is started at the end of the page. Complete this `linear_search()` function to determine if a number that is input is, indeed, on the bingo card.

{% spoiler "Hint" %}

1. Consider using a for loop, to iterate through the array. For instance: `for (int i = 0; i < size; i++)` could work to access each element in the array.
    1. If we find a match  `arr[i] == n` we `return true`
2. Since we searched through till the end of the array, and didn't find a match,`return false`    

{% endspoiler %}


[Download our CS50 Reference sheet on Linear Search](https://ap.cs50.school/assets/pdfs/unit3/linear_search.pdf)
