#include <stdio.h>
#include<stdlib.h>

//Declaring a function
/* Input arguments are f(n-1) and f(n-2) and on exit, 
they will return value of f(n) and f(n-1) */
void fibonacci(int *a, int *b); // Input arguments are pointers



int main(void){
    // Declaring variables
    int n, i;
    int f1 = 1, f0 = 0;
    
    printf("Enter a positive integer n \n");
    scanf("%d", &n);
    
    if(n<1) //checking if the input number is positive if not, we exit the program
    {
        printf("The number is not positive \n");
        exit(1);
    }
    
    printf("The fibonacci sequence is :\n");
    printf("%d, %d, ", f0, f1);
    
    for(i=2 ; i<=n ; i++) //loop with i=2 as 2 inputs for f0 and f1 are already given
    {
        fibonacci(&f1,&f0); // calling function
        printf("%d, ", f1);
        
        if(((i+1)%10)==0) // line break
        {
            printf("\n");
        }
    }
return 0;
}

//Defining the function
void fibonacci(int *a, int *b)
{
    int next;
    
    //*a=f(n-1), *b=f(n-2), next=f(n)
    next = *a+*b;
    
    //*a=f(n), *b=f(n-1)
    *b=*a;
    *a = next;
    
}