# Lab 01 C Foundation

**Name:** Hien Minh Nguyen
**Student ID:** Your Student ID Here

---

## Compilation Instructions

To compile all individual problems use the following commands in the terminal:
```
gcc -o problem1 problem1.c -lm
gcc -o problem2 problem2.c
gcc -o problem3 problem3.c -lm
gcc -o problem4 problem4.c
gcc -o problem5 problem5.c
gcc -o problem6 problem6.c -lm
```

Run the compiled program with:
```
./problem1
./problem2
and so on...
```

---

## Description of Approach

### Problem 1.1: Reverse Digit Extraction
- Used modulo and division operators to extract each digit from the input number.
- Implemented a loop to print digits in reverse order (least to most significant).
- Basic input handling and output formatting.

### Problem 1.2: Edge Cases in Digit Extraction
- Extended 1.1 to accept multiple inputs until sentinel (-1) is entered.
- Handled negative numbers by taking absolute values and appending "negative".
- Added input validation checks.

### Problem 2.1: Minimum & Maximum Finder
- Scanned integers until 0 entered.
- Initialized min and max with highest and lowest integers respectively to handle all inputs.
- Tracked min and max dynamically.

### Problem 2.2: Enhanced Data Analysis
- Extended 2.1 to calculate sum, average, count of positive and negative numbers.
- Efficiently accumulated stats during input loop.

### Problem 3.1: Basic Prime Finder
- Checked each number from 2 to N-1 for prime by testing divisibility.
- Simple O(n^2) approach.

### Problem 3.2: Optimized Prime Finder
- Checked divisors only up to \(\sqrt{n}\).
- Optimized by skipping even divisors beyond 2.

### Problem 3.3: Sieve of Eratosthenes (If implemented)
- Marked multiples of primes as non-prime.
- Achieved O(n log log n) complexity.
- Generated prime list efficiently.

### Problem 4.1: Code Refactoring
- Rewrote confusing conditional assignment code.
- Used explicit if-else blocks and meaningful variable names.
- Improved readability and correctness.

### Problem 5.1: Chicken Farm Population Growth
- Simulated breeding growth over weeks using loop and doubling formula.
- Used double type for fractional population growth.

### Problem 5.2: Enhanced Chicken Farm Simulator
- Added mortality, capacity limit, sales, cost, and revenue calculation.
- Tracked overall farm economics with net profit calculation.

### Problem 6.1: Naive Polynomial Evaluation
- Directly evaluated polynomial with many repeated multiplications.
- Simple but inefficient.

### Problem 6.2: Optimized Polynomial Evaluation
- Factored common terms and reused calculations.
- Reduced number of operations significantly for performance.

---

## Known Issues / Limitations
- Input validation is basic and may not handle all edge non-numeric input cases.
- Negative number handling is only in digit extraction tasks.
- No menu-driven interface; each problem is run separately by executing binaries.
- No graphical or ASCII visualization implemented.
- Some large inputs for prime checking may take longer for naive implementation.

---

## Conclusion
This lab focused on building foundational skills in C programming including loops, conditionals, input/output, and basic algorithms. Optimization and clear code structuring were emphasized. The resulting code is readable, well-commented, and easily tested.

---

Thank you for reviewing my submission!

