class Solution {
public:
    void moveZeroes(vector<int>& a ) {
        int n = a.size();
        // step 1 - collect non zeros in temp
        vector<int>temp;
        for(int i=0;i<n;i++) {
            if(a[i] != 0) {
                temp.push_back(a[i]);
            }
        }
        // step 2 - put bach nz values at oringal array
        int nz = temp.size();
        for(int i = 0 ; i<nz;i++) {
            a[i] = temp[i];
        }

        // step 3 - from above we have already cal. the no of zeros
        for(int i = nz;i<n;i++) {
            a[i] = 0;
        }
        // return a;
        
    }
};
