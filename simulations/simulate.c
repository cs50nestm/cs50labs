/**
 * At University High School, 80% of the students are expected to get at
 * least a 4 on their APCSP exam. The program below is intended to 
 * simulate this result with n students, and display the number 
 * of students who received a 4 or a 5.
**/

#include <cs50.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(void)
{
    // initialize random seed
    srand(time(NULL));
    
    // declare and initialize variables
    int sum = 0;
    int n = get_int("Enter the number of students: ");
    
    // simulate 80 percent of students
    for (int i = 0; i < n; i++)
    {
       // TODO 
    }
    
    printf("Students receiving 4 or 5: %i\n", sum);      
    return 0;
}
