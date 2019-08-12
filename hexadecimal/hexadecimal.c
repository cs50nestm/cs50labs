#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string hex = get_string("Enter a hexadecimal number: ");
    int length = strlen(hex);

    for (int i = 0; i < length; i++)
    {
        if (!isxdigit(hex[i]))
        {
            printf("Please enter a valid hexadecimal number!\n");
            return 1;
        }
        else
        {
            hex[i] = tolower(hex[i]);
        }
    }

    int decimal = 0;

    for (int i = 0; i< length; i++)
    {
        // TODO
    }

    printf("%s in decimal is %i\n", hex, decimal);

}
