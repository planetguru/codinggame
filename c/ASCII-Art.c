#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int L;
    scanf("%d", &L); fgetc(stdin);
    int H;
    scanf("%d", &H); fgetc(stdin);
    char T[200];
    char dict[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','?'};
    fgets(T, 1024, stdin);
    
    // now capture the length of the incoming string T
    int length;
    length = strlen(T);

    int i,j;
    bool sw;
    
    // a bit of fiddling around - if there is any character which isn't recognised from
    // our dictionary, then replace it with a '?'
    for(i=0; i<length-1; i++){
        sw = false;
        for(j=0; dict[j] != '\0'; j++){
           if(toupper(T[i]) == dict[j]){
               sw = true;
               break;
           }
        }
        if(sw == false && T[i] != '\0'){
                T[i]='?';
                sw=true;
        }
    }
    
    
    char ROWS[H][1025];
    
    /* enable this line to print out the string which you are tyring to produce */
    // fprintf(stderr,"%s",T);
    
    /* populate pixel map ROWS from individual ROWs read on stdin */
    /* this is basically the 'font' definition for what we are gonna print */
    for (i = 0; i <= H; ++i) { 
        
        /* declare a character array to hold each row of bytes */
        char ROW[1025];
        
        /* read a full line from stdin and write it into ROW */
        fgets(ROW, 1025, stdin); 
        
        /* get all rows into a single 2D array structure */
        for(int c=0; ROW[c] != '\0'; c++){
            ROWS[i][c]=ROW[c];  
        }
    }
    
    /*
    * To verify that the ingest has worked and that you can access
    * the individual bytes correctly, just enable this to reprint 
    * what is stored in ROWS[][]
    
    for(i = 0; i<=H; i++){
        for(j=0; ROWS[i][j] != '\0'; j++){
            fprintf(stderr,"%c",ROWS[i][j]);   
        }
    }
    */
    
    /* go through each letter in the T string and find its position in the alphabet */
    /* and print the 'x'th row of bytes for those letters from the ROWS until done */
    
    int target,z,x;
    
    for(x=0; x<H; x++){     
        for(i=0; i<length; i++){
            for(j=0; dict[j] != '\0'; j++){ 
                if(toupper(T[i]) == dict[j]){
                    target = j;
                    int start = (target * L);
                    int end = (start + L);
                    for(z=start; z<end; z++){
                        fprintf(stdout,"%c",ROWS[x][z]);
                    }
                }         
            }
        }
        fprintf(stdout,"\n");
    }
        
    return 0;
}
