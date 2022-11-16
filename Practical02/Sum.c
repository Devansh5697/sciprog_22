#include <stdio.h>

int main(void){
    // Declaring Variables
    int i;
    float sum1, sum2, diff, tmp;
    
    // First sum
    sum1 = 0.0;
    for (i=1 ; i<=1000 ; i++) {
        sum1 = sum1+1.0/(float)i;
    }
    
    // Second sum
    sum2 = 0.0;
    for (i=1000 ; i>0 ; i--) {
        tmp = i;
        sum2 = sum2 + 1.0 / tmp;
    }
    
    //Printing the values
    printf(" Sum1=%f\n", sum1);
    printf(" Sum2=%f\n", sum2);
    
    // FInding the difference
    diff = sum1-sum2;
    printf("Difference between the two is %f\n",diff);
    
}