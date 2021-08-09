#include <stdio.h>
#include <cs50.h>

int main()
{
    int i = 15, j = 20, k;
    
    // TBD convert to a ternary operator
    
    if( i < j )
    {
        k = i;
    }
    else
    {
        j = k;
    }
    
    printf("%d", k);
    
    return 0;
}
