#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int>& v) {
    int n = v.size();
    for(int i = 1 ; i < n ; i++) {
        if(v[i] <= v[i-1]) {
            return false;
        }
    }
    return true;
}


int main() {
    vector<int> v = {55,1,2,4,5,6,7};
    
    if(isSorted(v)) {
        cout << "vector is sorted.\n";
    } else {
        cout << "The vector is not sorted\n";
    }
    
    return 0;
}
