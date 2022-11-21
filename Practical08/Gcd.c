//Iterative and Recursive versions of Euclid's Algorithm
#include<stdio.h>

int iterativeGCD(int a, int b); // Declaring function iterativeGCD
int recursiveGCD(int a, int b); //Declaring function recursiveGCD

int main()
{
    int a, b, ierror; //Initializing variables
    
    printf("Please input two positive integers\n");
    ierror = scanf("%d %d", &a, &b); //taking numbers as input argument
    if(ierror != 2)
    {
        printf("Please enter two integers\n");
        return 1;
    }
    
    if(a<=0 || b<=0)
    {
        printf("The numbers are not positive!\n");
        return 1;
    }
    
    //Call the functions
    printf("IterativeGCD(%d, %d) = %d\n", a, b, iterativeGCD(a, b));
    printf("RecursiveGCD(%d, %d) = %d\n", a, b, recursiveGCD(a, b));
    
    return 0;
    
}

//Function Defination

int iterativeGCD(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    return a; //returning value after using Euclidian algorithm in iterative Function
}

int recursiveGCD(int a, int b)
{
    if (b==0)
    {
        return a; //returning value after using Euclidian algorithm in recursive Function
    }
    else
    {
        return(recursiveGCD(b, a%b)); //calling recursiveGCD function inside recursiveGCD function i.e recursive approach
    }
}