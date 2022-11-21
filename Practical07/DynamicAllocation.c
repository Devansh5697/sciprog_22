#include <stdio.h>
#include <stdlib.h>

//Allocate the array
// Declare and defining the allocatearray function
int *allocatearray (int n) //argument passes as integer
{
    int *p;
    p=(int *) malloc((n) *sizeof(int)); 
    if(p==NULL) 
    {
        printf("Error in allocating memory\n");
        
    } 
    return p; // returns a pointer
}
//Fill with ones 
// Declare and defining the fillwithones function

void fillwithones (int *array, int n) 
{ 
    int i; 
    for (i=0; i<n; i++) 
        { 
            array[i]=1; //assigning every element of array value 1
            
        }
}
//Print the array 
// Declare and defining the printarray function

void printarray (int *array, int n) 
{ 
    int i; for (i=0; i< n; i++)
    {
        printf("a[%d]=%d\n", i, array[i]); //print elements of array
    }
}

//Deallocate the array 

void freearray (int *array)
{ 
    free(array);
}


int main()
{ 
    int length, *a;
    printf("Please enter the size of the array:\n"); 
    scanf("%d", &length);
    a=allocatearray(length); //Calling allocatearray function
    fillwithones (a, length);  //Calling fillwithones function
    printarray(a, length); //Calling printarray function
    freearray(a); //Calling freearray function
    a=NULL;
    return 0;
}