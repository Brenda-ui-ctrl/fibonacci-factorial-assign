#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    // Base case: Factorial of 0 and 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);  // Recursive call to compute factorial
    }
}

int main() {
    int num;

    // Ask the user for the number to calculate the factorial
    cout << "Enter a positive integer to find its factorial: ";
    cin >> num;

    // Check if the entered number is negative, factorial is not defined
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
        // Call the function to calculate factorial and display the result
        cout << "The factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}
