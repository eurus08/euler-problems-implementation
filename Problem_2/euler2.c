/* ######### euler2.c #########
Author: eurus
Date: February 22, 2025
Description: C implementation of Euler problem 2 
Find the sum of multiples of 3 or 5 below that 1000
*/

// Headers
#include <stdio.h>


int main(){
    // Declare variables 
    int sum = 0;
    int x_j = 2;// n-1 term of sequence
    int x_i = 1;// n-2 term of sequence
    int fib = 2;// new generated term of sequence

    while (fib < 4000000){        
        // check evenness
        if (fib%2 == 0){
            sum += fib;
        }

        // generate next value
        fib = x_j + x_i;

        // swap values
        x_i = x_j;
        x_j = fib;
    }
    
    
    // Dump answer
    printf("%s %d\n", "The sum is ", sum);

return 0;
}

