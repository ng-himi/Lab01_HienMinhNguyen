# Discussion and Answers for Lab 01 C Foundation

## Task 1.1: Reverse Digit Extraction
- **Objective:** Extract and display each digit of the input number from least to most significant digit.
- **Approach:** Used modulo operation (`% 10`) repeatedly to get the rightmost digit and integer division (`/ 10`) to remove the last digit.
- **Observations:** Simple loop with basic arithmetic operators efficiently solves the problem.
- **Potential Improvement:** Added handling for multiple numbers and negative inputs in Task 1.2.

## Task 1.2: Enhanced Digit Extraction
- **Enhancements:** Accepted multiple inputs until a sentinel (`-1`) allowed exit.
- **Negative Input:** Used `abs()` to process digits and appended "negative" after digits.
- **Input Validation:** Checked for valid integers using `scanf` return value.
- **Challenges:** Handling negative inputs properly is essential; printing order should be maintained.

## Tasks 2.1 and 2.2: Data Analysis
- **Objectives:** Calculate minimum, maximum, sum, average, count of positive/negative numbers from user input.
- **Technique:** Initialized min/max with `INT_MAX` and `INT_MIN` for safety, then iterated inputs until sentinel `0`.
- **Insights:** Efficient aggregation in a single loop reduces overhead.
- **Potential Bug:** Must carefully handle the case when no valid inputs are provided.

## Tasks 3.1 and 3.2: Prime Number Computation
- **Task 3.1:** Naive prime check looping from 2 to n-1.
- **Task 3.2:** Optimized by checking divisors only up to \(\sqrt{n}\) and skipping even numbers beyond 2.
- **Time Complexity:** Optimization significantly lowers complexity from O(n^2) to roughly O(n√n/2).

## Task 3.2 (Sieve): Sieve of Eratosthenes
- Employed Sieve of Eratosthenes for faster prime list generation in O(n log log n).

## Task 4.1: Code Refactoring
- **Problem:** Original code used assignments inside conditional, leading to potential bugs and hard readability.
- **Solution:** Separated conditions with explicit `if-else` blocks, meaningful variable names, and proper formatting.
- **Learning:** Clear code is more maintainable and less error-prone.

## Task 5.1: Chicken Farm Simulator
- **Functionality:** Simulated chicken population growth with breeding rate over weeks.
- **Data Types:** Used `double` to handle fractional growth.
- **Output:** Displayed weekly populations rounded to integers.

## Task 5.2: Expanded Simulator
- **Additional Features:** Included mortality, max capacity, weekly sales, cost and revenue calculation.
- **Logic:** Applied breeding and mortality rates, capped population at capacity, and subtracted sales weekly.
- **Business Calculation:** Tracked costs and revenue to compute net profit.
- **Challenges:** Careful ordering of operations needed to maintain correct population accounting.

## Task 6: Polynomial Optimization
- **Naive:** Direct polynomial evaluation with many redundant multiplications.
- **Optimized:** Factored terms to calculate common powers/products once, reducing total operations.
- **Benefits:** More efficient runtime and clearer mathematical correspondence.
- **Application:** Shows significance of algebraic manipulation before coding for optimization.

---

This document summarizes methodology, key ideas, and improvements applied to all lab tasks, reflecting learning outcomes in C programming fundamentals and problem-solving.
