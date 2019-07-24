# Linear Search

In this lab you will learn:

- Why study search algorithms
- How linear search works
- Computational Complexity

## Why Study Search Algorithms

There are many important applications of searching algorithms in computer science, from looking up a name in an address book to using an internet search engine.

The most basic search algorithm is called **linear search**. This algorithm checks every element in a list, starting at the beginning and incrementing through the list until the desired element is found. In the worst case, this would take n steps, where n was the number of elements in our list, and in the best case, we would find it in the first step.

David spoke about this in lecture, using the example of searching for a number in an array. He suggested that the pseudocode might look like this. 

```
for each element in array
    if element equals what you're looking for
        return true
return false
```

Note that we only `return false` after the `for` loop has finished, meaning we checked all the values in the array:

## Computational Complexity

