class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        map<int,int> lPref, rPref;
        vector<int> res;
        int n = nums.size();
        lPref[-1] = 1;
        for(int i =0;i<n;i++) {
            lPref[i] = nums[i] * lPref[i-1];
            
        }
        rPref[n] = 1;
        for(int i = n-1;i>=0;i--) {
            rPref[i] = nums[i] * rPref[i+1];
        }

        for(int i=0;i<n;i++) {
            int prod = lPref[i-1] * rPref[i+1];
            res.push_back(prod);
        }

        return res;

    }
};
