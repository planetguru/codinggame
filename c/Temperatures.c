#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Solution for Temperatures in C.
 */
int main()
{
    int n; // the number of temperatures to analyse
    int c; // a counter for reading values from stdin to temps[]
    
    scanf("%d", &n); 
    int temps[n]; // the n temps expressed as ints ranging from -273 to 5526
    
    // read the 'n' integers from stdin into the temps array one by one.
    for (c = 0; c < n; c++){
        scanf("%d", &temps[c]);
    }
    
    int lowest = 5527;
    int i;
    
    for( i=0; i<n; i++){
        if(temps[i]==0){ 
            continue; 
        }
        
        // if absoulte value here is lower than previous minimum, capture new lowest
        // or if value is higher and absolute is equivalent, capture new lowest
        if(abs(temps[i])<abs(lowest) || 
            ((temps[i]>lowest)&&(abs(temps[i])==abs(lowest)))){
                lowest=temps[i];    
        }
        
        fprintf(stderr,"found a value:%d.  lowest is now %d\n",temps[i], lowest);    
    }
    
    if(lowest==5527){
        lowest=0;
    }
    printf("%d\n",lowest);

    return 0;
}
