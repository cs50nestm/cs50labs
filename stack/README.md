# Stack

In this lab you will learn about:

- The definition of a Stack data structure
- How to implement a Stack 

## What is a Stack

A stack is a data structure that is similar in spirit to a pile of cafeteria trays.

![Trays](https://raw.githubusercontent.com/csbaxter/tutorials/2020/stack/trays.jpg)

Think about the trays in the cafeteria: when the dining staff put trays out before meals, they pile them from the bottom to the top, and then you take the top-most tray when you arrive. The last tray that the staff put on the piles is the first one taken from the pile.

Similarly, with stacks, the last element inserted will be the first element retrieved. We'll refer to this pattern of insertion and retrieval as **"last-in, first-out,"** or **LIFO** for short.

![LIFO](https://raw.githubusercontent.com/csbaxter/tutorials/2020/stack/lifo.jpg)

A stack's two primary operations are called `push` and `pop`. `push` places a new element on the top of the stack (like a cafeteria's tray or a function's stack frame), and `pop` retrieves the topmost element from the stack, decrementing the stack's size in the process.

Like queues (and unlike arrays), stacks typically don't allow access to elements in the middle.

Take a look at the code window to the right for a partially finished implementation of a stack using an array.  Notice that there's a MAXSIZE of 8 set for the stack and we must keep track to not go over this capacity otherwise a stack overflow will occur.  Granted, this stack overflow is an arbitrary limit in our situation (we could easily increase the MAXSIZE number) but it does mimic what might actually occur in a system with memory limits when a push is attempted on an already full stack.

Start by completing the `pop` function where you see "TODO".  You will need to get the top value on the stack to return to the main function call and also don't forget to decrement the variable `top`, that global variables serves as the level indicator for your stack.

Next complete the `push` function where you see "TODO".  For this case the check for `isFull` is already implemented, a stack should not be pushed onto if it is full.  Your job is to complete adding a value to the stack.

After `push` and `pop` are finished move onto the `main` function and complete the "TODO" areas there.  This includes filling the stack with random integers, print the top element of the stack using the `peek` function and finally iterate through the stack (from the top down, obviously) popping each element off and printing it as you go.

When you are ready to turn in, use the following command to submit:

`submit50 csbaxter/problems/2021/x/stack`
