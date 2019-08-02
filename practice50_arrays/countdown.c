#include <cs50.h>
#include <stdio.h>

#define COUNT 10

int main(void)
{
    int countdown[COUNT] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    for (int i = 0; i <= COUNT; i++)
    {
        if (i == 9)
        {
            printf("%i!\n", countdown[i]);
        }
    	  else
        {
            printf("%i..", countdown[i]);
        }
    }    
}
