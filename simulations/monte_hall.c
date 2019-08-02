// Monte Hall Problem is adapted from Rosetta Code
// Content is available under GNU Free Documentation License 1.2 unless otherwise noted.

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
 
#define GAMES 3000000
 
int main(void)
{
    // initialize random seed
    srand(time(NULL));  
    
    // initialize number of wins
    int win_by_switch = 0;
    
    // declare array of 3 doors
    int door[3];
    
    // declare variable to hold choice
    int choice;
    
    for (int i = 0; i < GAMES; i++)
    {
        // door1 gets 0 or 1, goat or car
        door[0] = rand() % 2; 
        
        // if door[0] has car, give other doors goats
        
        // else, randomly give door[1] a car (1) or a goat (0), and give door[2] what's left.
        
        // choose a random door
        
        // since the host will only open a door with a goat, if either of the other 
        // doors has the car, the player wins if they switch
        
    }
                                                
    printf("Out of %i games, you would win %i times by switching!\n", GAMES, win_by_switch);                                            
}
