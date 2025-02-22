# Euler Problem 1 
## Multiples of 3 or 5.

If we list all the natural numbers below 10 that are multiples of 3 or 5,we get 3, 5, 6 and 9. The sum of these multiples is. 

We want to find the sum of all the multiples of 3 or 5 that are below 1000

### Solution
A multiple of 3 or 5 is any number that can be divide by 3 or 5 without a remainder.
Hence we use the modulo operator to find a series of numbers generated from a loop.

#### Algorithm: Sum of Multiples of 3 or 5 Below 1000

**Input:** None  
**Output:** The sum of all natural numbers below 1000 that are multiples of 3 or 5.

#### Steps:
1. Initialise `sum ← 0`.
2. For `i` from `1` to `999` (inclusive), do:
   - If `i` is divisible by `3` or `5`, then:
     - Add `i` to `sum`.
3. Output `sum`.
