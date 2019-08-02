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
        if (door[0] == 1)
        {
            door[1] = 0;
            door[2] = 0;
        }
        // else, give door2 car or goat, give door3 what's left.
        else
        {
            door[1] = rand() % 2;
            door[2] = (door[1] == 1) ? 0 : 1;
        }
        
        // choose a random door
        choice = rand() % 3;
        
        // since the host will only open a door with a goat, if either of the other 
        // doors has the car, the player wins if they switch
        if (door[(choice + 1) % 3] == 1 || door[(choice + 2) % 3] == 1)
        {
            win_by_switch++;
        }
    }
                                                
    printf("Out of %i games, you would win %i times by switching!\n", GAMES, win_by_switch);                                            
}
