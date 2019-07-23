// complete the linear search function

#include <cs50.h>
#include <stdio.h>

#define NUMBERS_ON_CARD 24

// function prototype
bool linear_search(int arr[], int n, int length);

// Numbers on bingo card
int bingo_card[] = {7, 14, 4, 9, 6, 26, 22, 24, 20, 28, 40, 34, 36, 35, 58, 55, 46, 52, 49, 73, 68, 72, 74, 64};

int main(void)
{
    // Prompt user for number
    int number = get_int("Number: ");
    
    if (linear_search(bingo_card, number, NUMBERS_ON_CARD))
    {
        printf("Found your number! Bingo!\n");
    }
    else
    {
        printf("Sorry better luck next time!\n");
    }
}

bool linear_search(int arr[], int n, int length)
{
    // Complete linear search here, return true if found, false if not found
    
    return false;
}
