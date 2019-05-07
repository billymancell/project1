#include <stdio.h>

   
    
    
    int main () {
      
    float myArray[3][3] = { { 0.1, 0.2, 0.3 }, { 1.1, 1.2, 1.3 }, { 2.1,2.2, 2.3 } };
    float sum = 0;
    int x, y;
    for(x=0;x<3;x++) {
        for(y=0;y<3;y++) {
            sum = sum + myArray[x][y];
            printf("myArray[%d][%d], %f sum = %f\n", x, y, myArray[x][y], sum);

        }

        }
    sum = sum/9;
    printf ("mean = %f", sum);
    
    return 0; 
}




    
 