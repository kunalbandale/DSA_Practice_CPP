// optimal solution for code 
class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n = a.size();
        int j = 0; // j tracks the position to place the next non-zero element

        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                a[j] = a[i]; // Move the non-zero element to the j-th position
                j++;         // Increment j
            }
        }
        // Fill the rest of the array with zeros
        for (int i = j; i < n; i++) {
            a[i] = 0;
        }
    }
};
