#include <iostream>
using namespace std;

int main() {
    int x, y, c;

    cout << "Enter three numbers: ";
    cin >> x >> y >> c;

    if (x > y) {
        if (x > c) {
            cout << "x is greatest\n";
        } else {
            cout << "c is greatest\n";
        }
    } else {
        if (y > c) {
            cout << "y is greatest\n";
        } else {
            cout << "c is greatest\n";
        }
    }

    return 0;
}
