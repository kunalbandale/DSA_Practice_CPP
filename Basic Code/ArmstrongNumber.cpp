#include<iostream>
#include<cmath>  // for pow()
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int original = n;

    // Step 1: Count digits
    int count = 0;
    int temp = n;
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    // Step 2: Compute Armstrong sum
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, count); // digit^count
        temp = temp / 10;
    }

    // Step 3: Compare
    if (sum == original) {
        cout << "Armstrong Number";
    } else {
        cout << "Not an Armstrong Number";
    }

    return 0;
}
