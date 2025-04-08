/* ######### euler6.c #########
Author: eurus
Date: April 08, 2025
Description: C implementation of Euler problem 6
What is the 10001st prime number?
*/


// Headers
#include <stdio.h>

// Prototypes
int is_Prime(int number);


// Main function
int main(int argc, char *argv[]){

    // Initialize Variables
    int primeCount = 0, number = 0;

    // find 10001st Prime number 
    while (primeCount < 10001){
        number++;
        if (is_Prime(number) == 1) primeCount++;
    }

    // Output results
    printf("The 10001st Prime number is %d\n", number);

return 0;
}


// Subroutines

// Function to check if a number is prime
int is_Prime(int number){
    if (number <= 1) return 0;

    for (int i=2; i*i<= number; i++){
        if (number % i == 0) return 0; 
    }

    return 1;
}