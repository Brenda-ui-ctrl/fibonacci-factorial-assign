#include <iostream>
using namespace std;

// Function to print Fibonacci series up to nth term
void fibonacci(int n) {
    int first = 0, second = 1, next;

    // Check if the number of terms is less than or equal to 0
    if (n <= 0) {
        cout << "Please enter a positive number for terms in the Fibonacci series." << endl;
        return; // Exit the function
    }

    // Print the first term if n >= 1
    cout << "Fibonacci Series: ";
    
    if (n >= 1) cout << first << " ";  // Print first term (0)
    
    if (n >= 2) cout << second << " "; // Print second term (1)
    
    // Loop to generate Fibonacci series from the 3rd term
    for (int i = 3; i <= n; i++) {
        next = first + second;  // Next term is the sum of the previous two terms
        cout << next << " ";  // Print the next term
        first = second;  // Update first to the previous second term
        second = next;   // Update second to the newly computed next term
    }
    cout << endl;  // Newline at the end
}

int main() {
    int n;

    // Ask the user for the number of terms in the Fibonacci series
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    // Call the function to print the Fibonacci series
    fibonacci(n);

    return 0;
}
