// Monte Hall Problem is adapted from Rosetta Code
// Content is available under GNU Free Documentation License 1.2 unless otherwise noted.

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
 
#define GAMES 3000000
 
int main(void)
{
    srand(time(NULL));  
    
    int win_by_switch = 0;
    
    int door[3], choice;
    
    for (int i = 0; i < GAMES; i++)
    {
        // door1 gets 0 or 1, goat or car
        door[0] = rand() % 2; 
        
        // if door[0] has car, give other doors goats
        
        // else, give door2 a car (1) or a goat (0), give door3 what's left.
        
        // choose a random door
        
        // since the host will only open a door with a goat, if either of the other 
        // doors has the car, the player wins if they switch
        
    }
                                                
    printf("Out of %i games, you would win %i times by switching!\n", GAMES, win_by_switch);                                            
}
