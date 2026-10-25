class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        map<int,int> hash;
        
        for(auto i : nums) {
            hash[i]++;
        }
        
        int maxi = 1;
        int count =1;
        for(int i =0;i<nums.size();i++) {
            if(hash.find(nums[i] -1) == hash.end()) {
                int start = nums[i];
                while(hash.find(start+1) != hash.end()) {
                    start+=1;
                    count++;
                }
            }
            maxi = max(maxi, count);
            count = 1;
        }
        return maxi;
    }
};
