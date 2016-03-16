#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * The Descent.  Solution in C.
 **/
int main()
{

    // game loop
    while (1) {
        int spaceX;
        int spaceY;
        int highestheight = 0;
        int highestmountain = 0;
        scanf("%d%d", &spaceX, &spaceY);
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain, from 9 to 0. Mountain heights are provided from left to right.
            scanf("%d", &mountainH);
            if(mountainH > highestheight){
                highestmountain=i;
                highestheight=mountainH;
            }
        }

        fprintf(stderr, "spaceX:%d, highestmountain:%d", spaceX, highestmountain);
        if(spaceX==highestmountain){
            fprintf(stderr, "action: FIRE\n");
            printf("FIRE\n");
        }else{
            printf("HOLD\n"); 
        }
    }

    return 0;
}
