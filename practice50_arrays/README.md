# Practice50: Arrays

Complete the distribution code on the right to solve the following problems:

1. Countdown
2. Fibo
3. Garbage Values
4. Initializations
5. Mean
6. Minesweeper
7. Pokemon

## 1. Countdown

This code attempts to run a launch-style countdown, from 9 to 0, but unfortunately encounters a runtime error. Fix the bug!

## 2. Fibo

Calculating a series of Fibonacci numbers, in which any given number in the series is the sum of the previous two (e.g. 0, 1, 1, 2, 3, 5, 8, ...), is often done recursively (more on what this means later in the course). However, it can also be done quite effectively using an array. Write code to calculate and store the first 25 Fibonacci numbers in an array. You should only need to explicitly declare the first two numbers, and then use a loop to calculate and print the rest.

## 3. Garbage Values

In this program, an array of 20 ints is declared, some values are set, and then the sum of the array is printed. However, the value printed seems to have little to do with the actual value of the sum. Why might this be? Fix the bug, to print the actual sum!

## 4. Initialization

Rewrite the distribution code, initializing two arrays -- a 1-dimensional array of size 10 ,and a 2-dimensional array of size 30x30. For the 1-D array, please rewrite the current initialization using just 1 line (instead of 4). For the 2-D array, please initialize it such that the element at indexes i, j is of value i * j. Print both arrays, to test your code!

## 5. Mean

Write a program prompts the user to input 5 integers. Store the integers in an array, and print out the mean of their values (the float can be rounded to 2 decimal places). Example output:

```
$ ./mean
Give me an integer: 4
Give me an integer: 1
Give me an integer: 5
Give me an integer: 10
Give me an integer: 5
Average: 5.00
```

## 6. Minesweeper

In this distribusion code, a 2-dimensional integer array of size 10x8 has hijacked, and randomly filled with 5 mines! You want to 'sweep' the array, and print out the location (coordinates in the array) of all 5 mines. The value 1 indicates a mine has been set; otherwise, the value will be 0! You can use coordinate values that are either 1-indexed (1-10, 1-8) or 0-indexed (0-9, 0-7).

## 7. Pokemon

Write a program that prompts the user to input the names of five Pokemon. Store those Pokemon in an array, and randomly select one to print out. HINT: Don’t reinvent the wheel — a function already exists that will return a random number!

```
$ ./pokemon
Give me a Pokemon: Butterfree
Give me a Pokemon: Clefairy
Give me a Pokemon: Diglett
Give me a Pokemon: Growlithe
Give me a Pokemon: Rapidash
Clefairy, I choose you!
```
