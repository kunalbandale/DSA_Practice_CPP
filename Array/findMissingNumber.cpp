class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int j = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] == j){
                j++;
            }
        }
        return j;
        
    }
};
