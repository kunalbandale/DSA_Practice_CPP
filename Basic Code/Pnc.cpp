#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    if (r > n) {
        cout << "Invalid input: r cannot be greater than n." << endl;
        return 0;
    }

    int result = factorial(n) / factorial(n - r);
    cout << "P(" << n << ", " << r << ") = " << result << endl;

    return 0;
}
