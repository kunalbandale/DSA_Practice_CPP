#include <bits/stdc++.h>
using namespace std;

int secondLargest(const vector<int> &a, int n) {
    int largest = a[0];
    int slargest = INT_MIN;
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
        } else if (a[i] < largest && a[i] > slargest) {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(const vector<int> &a, int n) {
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        } else if (a[i] > smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondLargestOrderElements(int n, const vector<int> &a) {
    int slargest  = secondLargest(a, n);
    int ssmallest = secondSmallest(a, n);
    return { slargest, ssmallest };
}

int main() {
    vector<int> v = { 4, 6, 8, 1, 2 };
    int n = v.size();

    vector<int> result = getSecondLargestOrderElements(n, v);
    cout << "Second largest: " << result[0] << "\n";
    cout << "Second smallest: " << result[1] << "\n";

    return 0;
}
