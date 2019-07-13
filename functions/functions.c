#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt)
{
    // modify this function to print the prompt and return a positive int
    return INT_MAX;
}

int main(void)
{
    int n = get_positive_int("Enter a positive number: ");
    
    // print the output from our function
    printf("My positive int is %i.\n", n);
}
