# Ternary operator

In this lab you will learn:

- What a ternary operator is
- How to use a ternary operator

## What is a ternary operator

The ternary operator is nothing more than a succint if and else conditional statement.

The ternary operator takes three arguments:

- The first is a comparison argument
- The second is the result upon a true comparison
- The third is the result upon a false comparison

For example, the following code:

```
int a = 10, b = 20, c;

if (a < b) {
    c = a;
}
else {
    c = b;
}
```
can be replaced by the ternary operator statement:

```
int a = 10, b = 20, c;

c = (a < b) ? a : b;

```
Use of the ternary operator is a style preference, some programmers prefer its succinctness but others feel it is too crypic and makes code hard to follow, which is a concern for code maintainability.  

To make things really complex, you can nest ternary operators.  So this:
```
int a = 1, b = 2, ans;
if (a == 1) {
    if (b == 2) {
        ans = 3;
    } else {
        ans = 5;
    }
} else {
    ans = 0;
}
```

Would become this:
```
int a = 1, b = 2, ans;
ans = (a == 1 ? (b == 2 ? 3 : 5) : 0);
```

That's much shorter code, but can be a bit of a mind bender.

## What to do

To practice, convert the code on the right side to a ternary operator.
