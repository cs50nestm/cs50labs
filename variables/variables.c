#include <cs50.h>
#include <stdio.h>  

int main(void)
{
    // Let's assume my age is 18
    printf("Right now I'm %i years old.\n", 18);
    
    // My age next year
    printf("Next year I'll be %i years old.\n", 18 + 1);
    
    // My age in 10 years
    printf("In 10 years, I'll be %i!\n", 18 + 10);
    
    // My age in 2050!
    printf("In the year 2050 I'll be %i! Wow!\n", 18 + 2050 - 2019);
}
