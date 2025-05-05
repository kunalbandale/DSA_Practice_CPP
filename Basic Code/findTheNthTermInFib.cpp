#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the term number (n): ";
    cin >> n;

    int first = 0, second = 1, next;

    if (n == 0) {
        cout << "Fibonacci term at index " << n << " is: " << first;
    } else if (n == 1) {
        cout << "Fibonacci term at index " << n << " is: " << second;
    } else {
        for (int i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        cout << "Fibonacci term at index " << n << " is: " << second;
    }

    return 0;
}
