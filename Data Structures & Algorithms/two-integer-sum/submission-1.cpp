class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        vector<int> res;
        for(int i =0;i<nums.size();i++) {
            hash[nums[i]] = i;
        }


        for(int i =0;i<nums.size();i++) {
            if(hash.find(target - nums[i]) != hash.end() && i!= hash[target - nums[i]]) {
                res.push_back(i);
                res.push_back(hash[target-nums[i]]);
                break;
            }
        }

        return res;
    }
};
