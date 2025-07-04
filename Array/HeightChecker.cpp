class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> sortedArr = heights;
        sort(sortedArr.begin() , sortedArr.end());

        for(int i = 0 ; i < heights.size() ; i++) {
           if(heights[i] != sortedArr[i]) {
            count++;
           }
        }
            return count;

    }
  
};
