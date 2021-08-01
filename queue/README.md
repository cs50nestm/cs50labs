# Queue

In this lab you will learn about:

- The definition of a Queue data structure
- How to implement a Queue

## What is a Queue

A queue is a data structure that is similar in spirit to a fair line. As you can see in this photo, the first dog in line can expect to be the first to the tree.

![dogs](https://raw.githubusercontent.com/csbaxter/tutorials/2020/queue/dogs.jpg)

Similarly, with queues, the first element inserted will be the first element retrieved. We'll refer to this pattern of insertion and retrieval as "first-in, first-out," or FIFO for short.


A queue's enqueue function places a new element at a queue's "tail" end, while dequeue retrieves the element at a queue's "head" (i.e., front).

Like stacks (and unlike arrays), queues typically don't allow access to elements in the middle.

![FIFO](https://raw.githubusercontent.com/csbaxter/tutorials/2020/queue/fifo.jpg)

## What to do

Look to the right side to see one way to define a queue for `char*s`.


`head` is the index of the queue's head element. We'll adjust it as we `dequeue` elements.

Why would we need to keep track of the head of our queue? Why not simply consider the element at `strings[0]` to be the head and the element at `strings[size - 1]` to be the tail?

This would require us to shift all of the elements from `strings[1]` to `strings[size - 1]` down by one position every time we call `dequeue`, which is a big waste of time especially if we've got a long queue!

`CAPACITY` is a constant and strings is a statically-sized array of `char*s` that you'll use for storing the `char*` elements.

`size` stores the number of elements currently in the queue. You'll need to adjust it appropriately so that you can track the location of the "tail" of the queue.

To `enqueue` an element, first make sure that the array isn't full by comparing size to CAPACITY.

If `size` < `CAPACITY`, store the element in the next available open slot, which should be at index [(head + size) % CAPACITY].

Don't forget to increment size!

To `dequeue` an element, first make sure that there are elements in the array by comparing `size` to 0.

If `size` > 0, the element at the head of the list is the one you'll want to `dequeue`.

Don't forget to reposition head and decrement `size`!

When you are ready to turn in, use the following command to submit:

`submit50 csbaxter/problems/2021/x/queue`
