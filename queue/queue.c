// for strdup() in the testing code
#define _XOPEN_SOURCE 500
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// the capacity of the queue
#define CAPACITY 10

// a queue
typedef struct
{
    // the index of the first element in the queue
    int head;

    // storage for the elements in the queue
    char* strings[CAPACITY];

    // the size of the queue
    int size;
}
queue;

// declare a queue (as a global variable)
queue q;

/**
 * Puts a new element into the queue into the "end" of the data structure
 * so that it will be retrived after the other elements already in the
 * queue.
 */
bool enqueue(char* str)
{
    // TODO
    // check if size is less than CAPACITY
    // store element at tail
    // increment size
    // return true if success, false if size is at capacity
}

/**
 * Retrieves ("dequeues") the first element in the queue, following the
 * the "first-in, first-out" (FIFO) ordering of the data structure.
 * Reduces the size of the queue and adjusts the head to the next element.
 */
char* dequeue(void)
{    
     char* element = NULL;
	
    // TODO
    // check if there are elements to dequeue
    // reposition head
    // decrement size
    // return element at original head
     
     return element;
}

/**
 * Implements some simple test code for our queue
 */
int main(void)
{
    // initialize the queue
    q.head = 0;
    q.size = 0;

    printf("Enqueueing %i strings...", CAPACITY);
    for (int i = 0; i < CAPACITY; i++)
    {
        char str[12];
        sprintf(str, "%i", i);
        enqueue(strdup(str));
    }
    printf("done!\n");

    printf("Making sure that the queue size is indeed %i...", CAPACITY);
    assert(q.size == CAPACITY);
    printf("good!\n");

    printf("Making sure that enqueue() now returns false...");
    assert(!enqueue("too much!"));
    printf("good!\n");

    printf("Dequeueing everything...");
    char* str_array[CAPACITY];
    for (int i = 0; i < CAPACITY; i++)
    {
        str_array[i] = dequeue();
    }
    printf("done!\n");

    printf("Making sure that dequeue() returned values in FIFO order...");
    for (int i = 0; i < CAPACITY; i++)
    {
        char str[12];
        sprintf(str, "%i", i);
        assert(strcmp(str_array[i], str) == 0);
        free(str_array[i]);
    }
    printf("good!\n");

    printf("Making sure that the queue is now empty...");
    assert(q.size == 0);
    printf("good!\n");

    printf("Making sure that dequeue() now returns NULL...");
    assert(dequeue() == NULL);
    printf("good!\n");

    printf("Making sure that the head wraps around appropriately...");
    for (int i = 0; i < CAPACITY; i++)
    {
        assert(enqueue("cs50!"));
    }

    // to make sure that they adjust the head pointer appropriately, we'll
    // enqueue and dequeue a bunch of times to make sure they don't just
    // walk off the end of the char* strings[] array
    for (int i = 0; i < CAPACITY * 10; i++)
    {
        for (int j = 0; j < CAPACITY / 2; j++)
        {
            assert(dequeue());
        }
        for (int j = 0; j < CAPACITY / 2; j++)
        {
            assert(enqueue("cs50!"));
        }
    }
    printf("good!\n");

    printf("\n********\nSuccess!\n********\n");

    return 0;
}
