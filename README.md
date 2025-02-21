# fibonacci-factorial-assign
fibonacci series codes and factorial in c++ for algorithm design
REG NUMBER: EB3/61593/22
NAME: BRENDA BARASA
Explanation of Fibonacci Code:
Input: The program takes the number of terms n as input from the user.
Base Case: The first two terms of the Fibonacci series are printed separately (0 and 1).
Looping: Starting from the third term, the next term in the Fibonacci series is the sum of the previous two terms.
Output: The program prints the Fibonacci series up to n terms.

Explanation of Factorial Code:
Input: The program takes a positive integer num from the user.
Base Case: The factorial of 0 or 1 is 1 (handled directly).
Recursive Case: For any number greater than 1, the factorial is computed by multiplying the number with the factorial of n-1 (recursive call).
Output: The program calculates and prints the factorial of the entered number.

Design of Algorithms:
Fibonacci Series:
Time Complexity: O(n) — We calculate each Fibonacci number once.
Space Complexity: O(1) — The space usage is constant because we only use a fixed number of variables for storing the previous two terms.
Factorial:
Time Complexity: O(n) — We are making n recursive calls to compute the factorial.
Space Complexity: O(n) — The space complexity is due to the recursive calls that will be stored in the stack until the base case is reached.
