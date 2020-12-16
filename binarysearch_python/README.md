# Binary Search

In this lab you will learn:

- What binary search is
- Computational Complexity

## What is Binary Search?

We saw one searching algorithm earlier on, **linear search**. Though linear search can be a good solution when searching through small, unsorted data sets, for large data sets (i.e. looking up a name in a phone book) it can be quite inefficient. A much faster approach is to use a **binary search** algorithm. The trade-off however, is that the data for **binary search** must be sorted first.

With **binary search**, we are dividing the problem in half with each iteration, so that there are fewer steps required to complete our search. We see this in lecture, when David demonstrates finding a name in a phone book by tearing the book in half.

![Binary_Search](https://raw.githubusercontent.com/cs50nestm/cs50labs/2019/binarysearch/binary_search.gif)

{% next %}

The pseudocode for binary search could look like this:

```
set min_index = 0 and max_index = n - 1
repeat while min_index <= max_index
    find middle of list (make sure to round down, middle must be a whole number)
    if target is less than numbers[middle]
        set max_index to middle - 1
    else if target is greater than numbers[middle]
        set min_index to middle + 1
    else if target is equal to numbers[middle]
        you found target in the list (return True)
target is not in the list (return False)
```

Note that we only `return False` after the `while` loop has finished, meaning we checked all the values in the list.


## Computational Complexity

Binary search has what we call a logarithmic running time, **O(log n)**, since we are dividing the problem in half each time.

{% next %}

## Your Turn

Practice writing a **binary search** algorithm by completing the function in `binary.py`.
The function is already defined as:

```python
def bin_search(numbers, target)
```

Note that this function must return `True` or `False`. When the function is called, as it is from the `main()` function, there are two arguments: `numbers` the name of the list we are searching through, and `target`, the element we are searching for.


[Download our CS50 Reference sheet on Binary Search](https://cs50.harvard.edu/ap/2020/assets/pdfs/binary_search.pdf)
