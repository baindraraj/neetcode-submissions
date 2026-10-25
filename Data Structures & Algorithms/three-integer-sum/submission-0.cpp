class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> res;

        for (int i = 0; i < nums.size(); i++) {
            int ele = nums[i];
            int j = i + 1, k = nums.size() - 1;
            vector<int> temp;
            while (j < k) {
                int sum = ele + nums[j] + nums[k];
                if (sum == 0) {
                    temp = {ele, nums[j], nums[k]};
                    res.insert(temp);
                    j++;
                    k--;
                } else if (sum < 0)
                    j++;
                else
                    k--;
            }
        }
        vector<vector<int>> ans;
        for (auto it : res) {
            ans.push_back(it);
        }
        return ans;
    }
};
