#include <stdio.h>

int main() 
{
    int a = 15; 
    int b = 3;  
    int result; // Variable to store the result

    result = (a > b) ? a : b; 

    printf("The greater value is result = %d\n", result); // Print the value of result

    return 0; 
}