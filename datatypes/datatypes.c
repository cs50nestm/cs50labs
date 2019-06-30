#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare a string named "name" and get input with get_string
    string name = get_string("Name: ");
    
    // declare an int named "age" and get user input with get_int
    
    
    // declare a float named "gpa" and use get_float to enter a number with a decimal
    
    
    // declare a char named "grade" and use get_char to enter a letter grade
    
    
    // declare long long named "student_id" and use get_long for input
    
   
    // declare a double named "pi" and use get_double to accept user input to 10 decimal placees
    
    
    // print a blank line then print out each variable value
    print("\n");
    printf("Hello %s, here is the data you entered...\n", name);
    printf("Student ID: %lld\n", student_id);
    printf("Age: %i\n", age);
    printf("GPA: %.1f\n", gpa);
    printf("Grade: %c\n", grade);
    printf("The value of pi is %.10f\n", pi);
}
