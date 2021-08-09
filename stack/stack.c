/*************************************************************************
 * stack.c
 *
 * Implements a simple stack structure for char* s.
 ************************************************************************/

// for strdup() in the testing code
#define _XOPEN_SOURCE 500

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// the capacity of the stack
#define CAPACITY 10

typedef struct
{
    // storage for the elements in the stack
    char* strings[CAPACITY];

    // the number of elements currently in the stack
    int size;
}
stack;

// declare a stack (as a global variable)
stack s;

/**
 * Puts a new element into the stack onto the "top" of the data structure
 * so that it will be retrived prior to the elements already in the stack.
 */
bool push(char* str)
{
    // TODO push the value str onto the stack if the stack is not at capacity, 
    // return true if success or return false if it is at capacity.
}

char* pop(void)
{
    // TODO remove the element from the top of the stack and return, if empty return NULL
    char* element = NULL;
    
    
    return element;
}

char* peek(void)
{
    // TODO return the element from the top of the stack (do not remove!)
    char* element = NULL;
    
    return element;
}

/**
 * Implements some simple test code for our stack
 */
int main(void)
{
    // initialize the stack
    s.size = 0;

    printf("Pushing %i strings onto the stack...\n", CAPACITY);
    for (int i = 0; i < CAPACITY; i++)
    {
        char str[12];
        sprintf(str, "%i", i);
        push(strdup(str));
        printf("%s\n", str);
    }
    printf("done!\n");

    printf("Making sure that the stack size is indeed %i...", CAPACITY);
    assert(s.size == CAPACITY);
    printf("good!\n");

    printf("Making sure that push() now returns false...");
    assert(!push("too much!"));
    printf("good!\n");
    
    printf("Taking a peek at the top of the stack...\n");
    printf("%s", peek());
    printf("\ngood!\n");
    
    
    printf("Popping everything off of the stack...\n");
    char* str_array[CAPACITY];
    for (int i = 0; i < CAPACITY; i++)
    {
        str_array[i] = pop();
        printf("%s\n",str_array[i]);
    }
    
    printf("done!\n");
    

    printf("Making sure that pop() returned values in LIFO order...");
    for (int i = 0; i < CAPACITY; i++)
    {
        char str[12];
        sprintf(str, "%i", CAPACITY - i - 1);
        assert(strcmp(str_array[i], str) == 0);
        free(str_array[i]);
    }
    printf("good!\n");

    printf("Making sure that the stack is now empty...");
    assert(s.size == 0);
    printf("good!\n");

    printf("Making sure that pop() now returns NULL...");
    assert(pop() == NULL);
    printf("good!\n");
    
    

    printf("\n********\nSuccess!\n********\n");

    return 0;
}
