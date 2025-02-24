/* ######### euler4.c #########
Author: eurus
Date: February 22, 2025
Description: C implementation of Euler problem 4
Find the largest palindrome made from the product of two 3-digit numbers.
*/

// Headers
#include <stdio.h>

// Prototypes
int reverse(int number);

int main(){
    // Declare variables
    int largest_palindrome, prod;
    
    for (int i = 500; i <1000; i++){ //start from 500 to reduce iterations
        for (int j = 500; j < 1000; j++){
            prod = i*j;

            if ((prod == reverse(prod)) && (largest_palindrome < prod)){
                largest_palindrome = prod;
            }
        }
    }
    

    printf("%s %d\n", "The largest palindrome is ", largest_palindrome);

return 0;
}


int reverse(int number){
    // Declare variables
    int lastDigit, rev;
    rev = 0;
     
    while (number > 0){
        lastDigit = number%10;  //get the last digit of number
        rev = (rev*10) + lastDigit; //Construct reverse number
        number/=10;
    }
    return rev;
}


