// complete the merge_sort function

#include <stdio.h>
#include <cs50.h>

#define SIZE 10

// function prototypes
void merge_sort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);
void print_array(int arr[], int size);

int main(void)
{
    // initialize array
    int arr[] = {1, 8, 4, 6, 0, 3, 5, 2, 7, 9};

    // sort array
    merge_sort(arr, 0, SIZE - 1);

    // print out the array
    print_array(arr, SIZE);

    // done
    return 0;
}

void merge_sort(int arr[], int left, int right)
{
    // return if fewer than 2 elements
    // TODO

    // find middle
    // TODO

    // sort left half then sort right half
    // TODO

    // merge both halves
    // TODO
}



// merges arr[left..mid] and arr[mid + 1..right]
void merge(int arr[], int left, int mid, int right)
{
    // length of left side
    int n1 = mid - left + 1;

    // length of right side
    int n2 =  right - mid;

    // create temp arrays for left and right
    int left_arr[n1], right_arr[n2];

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++)
    {
        left_arr[i] = arr[left + i];
    }

    for (int j = 0; j < n2; j++)
    {
        right_arr[j] = arr[mid + 1 + j];
    }

    // Merge the temp arrays back into arr[]
    // Initial index of left subarray
    int i = 0;

    // Initial index of right subarray
    int j = 0;

    // Initial index of merged subarray
    int k = left;

    while (i < n1 && j < n2)
    {
        if (left_arr[i] <= right_arr[j])
        {
            arr[k] = left_arr[i];
            i++;
        }
        else
        {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left_arr[], if there are any
    while (i < n1)
    {
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right_arr[], if there are any
    while (j < n2)
    {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}

// function to print an array
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}
