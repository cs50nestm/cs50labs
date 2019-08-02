#include <cs50.h>
#include <stdio.h>

#define N 20

int main(void)
{
    // declare the array, and store some values
    int values[N];
    values[0] = 1;
    values[1] = 10;
    values[2] = 5;
    values[3] = 12;
    values[4] = 3;
    
    // calculate the sum
    int sum = 0;
    for (int i = 0; i < N; i++) // You are not allowed to change this line of the code!
    {
        sum += values[i];
    }
    
    printf("The sum of 1 + 10 + 5 + 12 + 3 is: %i\n", sum);
}
