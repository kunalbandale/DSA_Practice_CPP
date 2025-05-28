#include<iostream>
#include<cmath>  // for pow()
using namespace std;

int main() {
    int number;
    cin >> number;

    int sq = number * number;

    // Count the number of digits in the original number
    int digits = 0, temp = number;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int mod = pow(10, digits);

    if (sq % mod == number) {
        cout << "Automorphic Number" << endl;
    } else {
        cout << "Not an Automorphic Number" << endl;
    }

    return 0;
}
