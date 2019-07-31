// complete the insertion_sort function

#include <cs50.h>
#include <stdio.h>

// function prototypes
void insertion_sort(int arr[], int n);
void print_array(int arr[], int n);

// size of array
#define SIZE 10

int main(void)
{ 
    // initialize array
    int arr[] = {1,8,4,6,0,3,5,2,7,9};
  
    // sort array
    insertion_sort(arr, SIZE); 
    
    // print out the array
    print_array(arr, SIZE); 
    
    // done
    return 0; 
} 

// function to print an array
void print_array(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
    {
        printf("%i ", arr[i]); 
    }
    printf("\n"); 
}

// insertion sort
void insertion_sort(int arr[], int n) 
{
    // TODO
}
