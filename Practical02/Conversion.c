#include <stdio.h>
#include <math.h>

int main()
{
    // Declaring Variables
    int i,inum,tmp,numdigits;
    float fnum;
    char binum[60];
    //Initializing 4-byte integer
    inum = 33554431;
    // Converting to float
    fnum = (float)inum;
    
    //Logic for conversion of binary numbers (String)
    i=0;
    tmp=inum;
    while(tmp>0) {
        sprintf(&binum[i],"%1d",tmp%2);
        tmp=tmp/2;
        i++;
    }
    
    // Terminate the string by '\0'
    binum[i] = '\0';
    
    // Completing the expression
    
    numdigits = ceil(logf(fnum)/logf(2));
    printf("The number of digits is %d\n", numdigits);
    printf("inum = %d , fnum = %f, inum in binary = %s\n",inum,fnum,binum);
}
