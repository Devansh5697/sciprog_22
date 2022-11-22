# include <stdio.h>
# include <stdlib.h>

void hanoi (int n, int source, int destination, int inter) //Declaring and defining the function
{
    //base cases
    if(n==1)
    {
        printf("Move disc from %d to %d\n", source, destination);
    }
    else
    {
        hanoi(n-1, source, inter, destination);
        printf("Move disc from %d to %d\n", source, destination);
        hanoi(n-1, inter, destination, source);
    }
}

int main(void)
{
    int h = 3; // initializing the variables
    printf("Solution for %d discs\n", h);
    hanoi(h,1,3,2); //calling the function
    return 0;
}