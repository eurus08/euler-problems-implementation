# Euler Problem 3
## Largest Prime Factor

The prime factors of 13195 are 5, 7, 13, 29.

What is the largest prime factor of the number 600851475143?


### Solution
To find the prime factors of a number, N, we divide the N by the smallest divisible prime number  we it becomes 1. The prime factor are the prime number that divided N counting the number of times they divided N.

*Note that since every will be dividing N continually dividing by its smallest prime factors till we find the largest and final. We need no explicity find Prime Number to divided it since every composite number can also be expressed by a product of prime number, the every composite number that divise the number would already be divided out*

## Algorithm: Finding the Largest Prime Factor of 600851475143

**Input:** Natural number (`N`)  
**Output:** The largest prime factor of `N`.

### Steps:
1. Initialise:
   - `N ← 600851475143`
   - `Largest_pf` (to store the largest prime factor)
2. While `N` is divisible by `2`, do:
   - Divide `N` by `2`
3. If `N = 1`, then:
   - Set `Largest_pf ← 2`
4. Otherwise:
   - For `i ← 3` to `√N` (incrementing by 2), do:
     - While `N` is divisible by `i`, do:
       - Divide `N` by `i`
     - If `N = 1`, then:
       - Set `Largest_pf ← i`
5. Output `Largest_pf`.
