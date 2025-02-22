/* ######### euler1.c #########
Author: eurus
Date: February 22, 2025
Description: C implementation of Euler problem 1 
Find the sum of multiples of 3 or 5 below that 1000
*/

// Headers
#include <stdio.h>


int main(){
    // Declare variables 
    int sum = 0;
    for (int i = 1; i < 1000; i++){
        if (i%3 == 0 || i%5 == 0){
            sum += i;
        }
    }
    
    // Dump answer
    printf("%s %d\n", "The sum is ", sum);

return 0;
}

