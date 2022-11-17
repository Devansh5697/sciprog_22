#include <stdio.h>
#include<math.h>

//Declaring and defining function
float deg_to_rad(float theta) // Function to convert degree to radians
{
    return M_PI * theta /180.0;
}

float trap_rule(float a , float b , int N , float function_array[N + 1]) // function to get the area under to curve of tan(x) using Trapezoidal Rule
{
    float sum = function_array[0] + function_array[N];
    int i = 0;
    for(i = 1 ; i < N ; i++)
    {
        sum += 2*function_array[i];
    }
    return(b-a) * (sum) / (2*N);
}


int main(void){
    // Declaring variables
    float start = 0;
    float end = 60;
    int N = 12;
    float step_size = (end-start) / N;
    float tan_arr[N+1];
    // loop counter to generate radian values and store tan(x) values in array
    int i=0;
    for(i = 0 ; i <= N ; i++)
    {
        tan_arr[i] = tan(deg_to_rad(step_size * i));
    }
    
float ans = trap_rule(deg_to_rad(start), deg_to_rad(end), N, tan_arr); // calling function trap_rule
printf("The Answer is %f\n", ans);
printf("The Actual value is %f\n",logf(2));
return 0;
}