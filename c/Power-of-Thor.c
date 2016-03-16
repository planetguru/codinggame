#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *  Power of Thor solution in C
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    scanf("%d%d%d%d", &lightX, &lightY, &initialTX, &initialTY);
    
    int thorX = initialTX;
    int thorY = initialTY;
    
    char *directionX = "";
    char *directionY = "";

    // game loop
    while (1) {              
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        scanf("%d", &remainingTurns);
 
        directionX="";
        directionY="";
        
        if(thorX>lightX  ){
            directionX="W";
            thorX--;
        }else if(thorX<lightX  ){
            directionX="E";
            thorX++;
        }
        
        if(thorY>lightY ){
            directionY="N";
            thorY--;
        }else if(thorY<lightY){
            directionY="S";
            thorY++;
        }
                
        fprintf(stderr, "thorX:%d, thorY:%d, lightX:%d, lightY:%d, directionX:%s, directionY:%s", thorX, thorY, lightX, lightY, directionX,directionY);
        printf("%s%s\n",directionY,directionX); // A single line providing the move to be made: N NE E SE S SW W or NW
    }

    return 0;
}
