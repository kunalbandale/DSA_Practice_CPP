#include <unordered_map>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> countMap;
        int majority = nums[0];
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            countMap[nums[i]]++;
            if (countMap[nums[i]] > n / 2) {
                majority = nums[i];
                break;
            }
        }

        return majority;
    }
};
