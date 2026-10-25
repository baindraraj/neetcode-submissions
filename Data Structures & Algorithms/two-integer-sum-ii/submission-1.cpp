class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n = num.size();
        int i =0 , j = n-1;
        vector<int> res;
        while(i < j) {
            int sum = num[i] + num[j];
            if(sum == target) {
                res = {i+1, j+1};
                break;
            } else if(sum < target) i++;
            else j--;
        }
        return res;
    }
};
