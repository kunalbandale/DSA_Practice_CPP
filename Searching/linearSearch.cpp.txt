#include <iostream>
using namespace std;

int main() {
    int arr[5] = {6, 2, 1, 0, 7};
    int n = 5;
    int num;
    cin >> num;

    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            cout << "Found at pos " << i << endl;
            found = true;
            break; 
        }
    }

    if(!found) {
        cout << "NOT FOUND!" << endl;
    }

    return 0;
}
