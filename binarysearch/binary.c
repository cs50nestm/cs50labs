// implement binary search function and submit to

#include <cs50.h>
#include <stdio.h>

bool bin_search(int value, int values[], int n);

int main(void)
{
    int arr[] = {2, 4, 6, 7, 8, 11, 14, 18, 20};

    int target = get_int("Enter a number: ");

    if (bin_search(target, arr, 9))
    {
        printf("Found\n");
    }
    else
    {
        printf("Not found!\n");
    }
}

bool bin_search(int value, int values[], int n)
{
    // TODO
    return false;
}
