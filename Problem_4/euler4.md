# Euler Problem 4
## Largest Palindrome Product

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is $9009 = 91 \times 99$

Find the largest palindrome made from the product of two 3-digit numbers.


### Solution
Every 3 digit number is between the numbers $100 - 999$ we need to find two numbers whose product is the largest palindrome.

A Palindrome is a number which is equal to its reverse. Eg. $9009 = 9009$. Hence to check if a number is a palindrome we need to find the reverse of the number and if its equal to it the number is equal to its reverse.

TO find the reverse of a number, we use the modulo operator and the with base 10. which would give a remainder of the last digit of any number every time. The algorithm is as follows:


#### Algorithm: Reverse an Integer

**Input:** An integer `number`  
**Output:** The reverse of `number`

#### Steps:
1. initialize:
   - `rev ← 0` (stores the reversed number)
2. While `number > 0`, do:
   - Extract the last digit: `lastDigit ← number % 10`
   - Append `lastDigit` to `rev`: `rev ← (rev * 10) + lastDigit`
   - Remove the last digit from `number`: `number ← number / 10`
3. Return `rev`



#### Algorithm: Find the Largest Palindromic Product of Two 3-Digit Numbers

**Input:** None  
**Output:** The largest palindromic product of two 3-digit numbers 

#### Steps:
1. initialize:
   - `largest_palindrome ← 0` (stores the largest palindrome found)
   - `prod` (stores the product of two numbers)
2. For `i` from `500` to `999`, do:
   - For `j` from `500` to `999`, do:
     - Compute the product: `prod ← i * j`
     - If `prod` is a palindrome and `prod > largest_palindrome`, then:
       - Update `largest_palindrome ← prod`
3. Output `largest_palindrome`

*Note prod is a palindrome if `prod == reverse(prod)`*.