class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> uniqueTypes;

        for (int type : candyType) {
            uniqueTypes.insert(type);
        }

        int maxCandiesAllowed = candyType.size() / 2;
        return min((int)uniqueTypes.size(), maxCandiesAllowed);
    }
};
