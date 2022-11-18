#include <stdio.h>
#include <math.h>

//Declaring a function

double arctanh1 (const double x , const double delta); //Function for Maclaurin approximation
double arctanh2 (const double x); //Function for natural logarithms approximation


int main(){
    // Declaring variables
    double delta, x;
    printf("Enter the precision for Maclaurin series\n");
    scanf("%lf", &delta);
    
    int length = 1000;
    double tan1[length]; //Store the results of arctanh1 in an array for each x
    double tan2[length]; //Store the results of arctanh2 in an array for each x
    
    int j=0; //array index
    x = -0.9; // start point of x
    while (x<=0.9 && j<length)
    {
        tan1[j] = arctanh1(x,delta); //calling function arctanh1
        tan2[j] = arctanh2(x); //calling function arctanh2
        printf("The difference at x = %lf  is %.10lf\n", x, fabs(tan1[j]-tan2[j]));
        j++;
        x = x+0.01; // sampled every 0.01 for -0.9 to 0.9
    }
    return 0;
}

//Defining the function
double  arctanh1(const double x, const double delta)
{
    double arcTan = 0; //approximated results
    double elem, val;
    int n = 0; //parameter for sum
    // applying Maclaurin approximation formula
    do{
        val = 2*n+1;
        elem = (pow(x,val))/val;
        arcTan += elem;
        n++;
    }while(fabs(elem) >= delta);
    
    return arcTan;
}

double  arctanh2(const double x)
{
    return ((log(1+x)-log(1-x))/2); //applying and returning the natural logarithms formula
}