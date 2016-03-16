#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Mars Lander - Level 1.  Solution in C
 **/
int main()
{
    int surfaceN; // the number of points used to draw the surface of Mars.
    scanf("%d", &surfaceN);
    for (int i = 0; i < surfaceN; i++) {
        int landX; // X coordinate of a surface point. (0 to 6999)
        int landY; // Y coordinate of a surface point. 
        scanf("%d%d", &landX, &landY);
    }

    // game loop
    while (1) {
        int X;
        int Y;
        int hSpeed; // horizontal speed (in m/s), can be negative.
        int vSpeed; // vertical speed (in m/s), can be negative.
        int fuel; // quantity of remaining fuel in liters.
        int rotate; // rotation angle in degrees (-90 to 90).
        int power; // thrust power (0 to 4).
        scanf("%d%d%d%d%d%d%d", &X, &Y, &hSpeed, &vSpeed, &fuel, &rotate, &power);

        if(vSpeed < -40){
                power=4;
        }
        if(vSpeed > 40){
                power=0;
        }

	/* 2 integers: rotate power. rotate is the desired rotation angle (should be 0 for level 1) */
	/* power is the desired thrust power (0 to 4). */

        printf("0 %d\n",power); 
    }

    return 0;
}
