# Euler Problem 5
## Smallest Multiple

 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


### Solution

To find the smallest multiple of 1 though 20, we start with an  initial LCM value of 1. For each number i from 1 to 20, the LCM is updated by the LCM of the current LCM and i. This ensures that the resulting value remains divisible by all previously considered numbers.

We find the LCM by dividing the product of the two number by their GCD. The GCD is found we the Euclidean Algorithm


---

#### Algorithm: Smallest Multiple of Numbers from 1 to 20

**Input:** None  
**Output:** The smallest positive number that is evenly divisible by all numbers from 1 to 20.

##### Steps:
1. Initialize `lcm ← 1`
2. For each integer `i` from `1` to `20`, do:
   - Update `lcm ← LCM(lcm, i)`
3. Output `lcm`

---

#### Algorithm: Euclidean Algorithm

**Purpose:** Compute the greatest common divisor of two integers
**Input:** `a` and `b`
**Output:** `GCD(a,b)`

##### Steps:
1. If `b < a`, swap `a` and `b`
2. Compute `remainder ← b mod a`
3. If `remainder = 0`, return `a`
4. Else, return `GCD(a, remainder)`

---

#### Algorithm: Find LCM of Two Numbers

**Purpose:** Compute the least common multiple of `a` and `b` using their GCD.
**Input:** `a` and `b`
**Output:** `LC(a,b)`

**Steps:**  
Return `(a × b) / GCD(a, b)`

