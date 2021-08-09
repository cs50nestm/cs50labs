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

Take a look at the code window to the right for a partially finished implementation of a stack using an array.  Study and make sure you understand the skeleton code.  Notice that there's a CAPACITY of 10 set for the stack and we must keep track to not go over this capacity otherwise a stack overflow will occur.  Granted, this stack overflow is an arbitrary limit in our situation (we could easily increase the CAPACITY number) but it does mimic what might actually occur in a system with memory limits when a push is attempted on an already full stack.

Start by completing the `pop` function where you see "TODO".  To pop an element off the stack, first make sure that there are elements in the array by checking whether 
`size > 0`.  If `size > 0`, decrement size and return the last element in the array.

Next complete the `push` function where you see "TODO".  To `push` an element onto the stack, first make sure that the array isn't full by comparing `size` to `CAPACITY`.  If there is room store the element in the next available slot.

After `push` and `pop` are finished implement the peek function, here you just need to "peek" at the top of the stack and return the value.

Compile and make sure the program passes the test procedures in the main function.  When you are ready to submit use the following command:

`submit50 csbaxter/problems/2021/x/stack`
