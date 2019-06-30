# Printf Placeholders

## What is a Placeholder?

One way of using `printf` is to simply type some text, surrounded by double quotes, inside of parentheses as in:

```c
printf("hello, world\n");
```

The `\n` is a special character that represents " new line". When this line of code is executed inside of a program, it will output

```
hello, world
```

But what if you want to print a number, or something other than a pre-defined string? That's where the strange looking syntax (`%i`, `%s`, etc.) you may have already seen comes in!

These symbols are "placeholders" for data stored in a variable. They are also refered to as "format strings" since they format the value that a variable holds, to be printed inside of a string.




