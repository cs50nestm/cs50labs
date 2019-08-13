# Hexadecimal

In this lab you will learn about:

- What hexadecimal is
- Why it is useful

## What is Hexadecimal?

Earlier this year we learned about **number systems**. Specifically about the **binary** number system, which is how computers store data ranging from numeric values and ASCII characters to source code and images. Binary systems (which use base 2) store all data as 0's and 1's. We contrasted this to our everyday **decimal** number system (base 10) which uses ten digits, `0-9`. **Hexadecimal** is a numbering system which uses 16 symbols. In addition to the symbols `0-9`, we use `a`, `b`, `c`, `d`, `e`, and `f`, for the higher values of 10, 11, 12, 13, 14, and 15.

In the same way as decimal numbers have place values that are powers of ten, and binary numbers use place values that are powers of two, hexadecimal numbers have place values that are powers of sixteen. So the hexadecimal number `0x13BA` (hexadecimal numbers are represented with `0x` in front of the value) would equate to 16<sup>0</sup> x A (A is the symbol for 10) plus 16<sup>1</sup> x B (or 11) plus 3 x 16<sup>2</sup> plus 1 x 16<sup>3</sup> which is 10 + 176 + 768 + 4096. Added up, these total to 5050.

{% next %}

## Why is Hexadecimal useful?

It turns out that binary numbers get very large very quickly. To express the decimal number 15, for instance, we need four place values in binary: 1 1 1 1. Because four digits of binary can represent 16 values, computer scientists settled on hexadecimal, a number system of base 16, to represent those larger numbers.

A very popular use of hexadecimal numbers is when referencing colors. Colors on a computer are made up of red, green and blue values (RGB) each of these in the range of `0-255`, which is the range of values represented by one byte or eight bits. Hex color codes are usually of the format `#rrggbb` where the `rr` is a hex value from `00` to `FF` representing the amount of red, `gg` represents a hex value for green, and `bb` represents a hex value for blue. So for instance `#000000` represents black since each color is displayed at their lowest possible intensity, and `#FFFFFF` represents mixing each of the three primary colors at their full intensity which gives us white.

{% next %}

## Your Turn

Complete the second `for` loop in the program on the right to convert a hexadecimal number to a decimal (base 10) number. 

After prompting the user for a hexadecimal number, the program iterates through the string and uses a function `isxdigit()` which checks that each character is a legal hexadecimal digit. The same loop then changes all digits to lower case, so that you can use the same algorithm to convert `'a'` or `'A'` to the `int` `10`.

{% spoiler "Hint" %}

1. Remember that the hexadecimal value is stored in a `string`, so that characters that appear as numbers, 0-9, are ASCII `char`'s. So `'0'` has an ASCII code of 48, though we can add or subtract `char`'s and they will behave as it's equivalent ASCII value. Can you come up with an algorithm to convert the `char` `'0'` to the `int` `0`?
2. How can you convert the A-F `char`s in the hexadecimal number to `int`'s? Since the ASCII value of `'A'` has numberic value (65), and a hexadecimal `'A'` is the equivalent of `10` in decimal, can you add or subtract something from `'A'` to get an output of `10`?


{% endspoiler %}

[Download our CS50 Reference sheet on Hexadecimal](https://ap.cs50.school/assets/pdfs/unit4/hexadecimal.pdf)
