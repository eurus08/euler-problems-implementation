/* ######### euler3.c #########
Author: eurus
Date: February 22, 2025
Description: C implementation of Euler problem 3 
What is the largest prime factor of the number 600851475143?
*/

// Headers
#include <stdio.h>



int main(){
    // Declare variables 
    long int N = 600851475143;
    int Largest_pf;
    
    while (N%2 == 0){
        N/=2;
    }

    if (N == 1 ){
       Largest_pf = 2;
    }
    else{
        for(int i = 3; i < i*i < N; i++){
            while (N%i == 0){
                N/=i;
            }
            if(N == 1){
                Largest_pf = i;
            }
        }
    }

    printf("%s %d\n", "The Largest Prime factor is ", Largest_pf);

return 0;
}

