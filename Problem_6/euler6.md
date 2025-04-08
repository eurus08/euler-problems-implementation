# Euler Problem 6
## 10001st Prime 

By listing the first six prime numbers:`2, 3, 5, 7, 11,` and `13` we can see that the 6th prime is 13.
What is the 10001st prime number?


### Solution
To find the 10001st prime number, we start numbering from 1 upwards and check whether each number is prime, if so we update a counter and stop the numbering when the count gets to 10001. 

We check whether the number is prime by check if the number has any divisors apart from 1 and itself. *(Checking up to root of the number is sufficient)*


---

#### Algorithm: 10001st Prime Number

**Purpose:** Find the `10001st` Prime Number
**Input:** None  
**Output:** The 10001st prime number

##### Steps:
1. InitialiZe:
   - `primeCount ← 0` (counts how many primes have been found)
   - `number ← 0` (current number)

2. While `primeCount < 10001`, do:
   - Increment `number ← number + 1`
   - If `is_Prime(number)` returns `true`:
     - Increment `primeCount ← primeCount + 1`

3. Output `number` as the 10001st prime number.

---

#### Algorithm: Find the 10001st Prime Number

**Purpose:** Determine whether a given integer is a prime number.
**Input:** `number` (int)  
**Output:** `True` if `number` is prime else `False`

##### Steps:
1. If `number ≤ 1`, return `false`
2. For each `i` from `2` to `√number`, do:
   - If `number % i == 0`, return `false`
3. Return `true`



