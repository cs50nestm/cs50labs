// complete the bubble_sort function

#include <cs50.h>
#include <stdio.h>

// function prototypes
void bubble_sort(int arr[], int size);
void print_array(int arr[], int size);

// size of array
#define NUMBER_OF_ELEMENTS 7

int main(void)
{ 
    // initialize array
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int size = NUMBER_OF_ELEMENTS;
  
    // sort array
    bubble_sort(arr, size); 
    
    // print out the array
    print_array(arr, size); 
    
    // done
    return 0; 
} 

// Function to print an array
void print_array(int arr[], int size) 
{ 
    for (int i = 0; i < size; i++) 
    {
        printf("%i ", arr[i]); 
    }
    printf("\n"); 
}

// bubble sort
void bubble_sort(int arr[], int size) 
{
    // TODO
}
