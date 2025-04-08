/* ######### euler5.c #########
Author: eurus
Date: April 02, 2025
Description: C implementation of Euler problem 5
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20'?
*/


// Headers
#include <stdio.h>

// Prototypes
int GCD(int a, int b);
int LCM(long a, int b);


// Main function
int main(int argc, char *argv[]){

    // Intialize varibales
    long lcm = 1;

    // finding lcm of 1 through 20
    for (int i = 1; i < 21; i++){
        lcm = LCM(lcm, i); 
    }

    // Output results 
    printf("The smallest multiple of 1 through 20 is %d\n", lcm);

return 0;
}


// Subroutines

// Function to find GCD of two number using Euclidean Algorithm 
int GCD(int a, int b){

    // Make b the biggest number 
    if (b < a ){
        int buffer = b;
        b = a;
        a = buffer;
    }

    int remainder = b%a;
    if (remainder == 0) return a;
    else return GCD(a, remainder);
}

// Function to find the LCM of two numbers using their GCD
int LCM(long a, int b){
    return (a*b)/GCD(a, b);
}