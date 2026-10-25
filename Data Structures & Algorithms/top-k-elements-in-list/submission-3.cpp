class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        /*
        1. sort the array
        2. check the top element if it matches then increase the frequency in max heap
        3. return the top k elements.
        */
        map<int,int> mp;
        priority_queue <pair<int,int>> pq;

        for(auto i : nums) {
            mp[i]++;
        }
        for(auto it: mp) {
            pq.push({it.second, it.first});
        }
        vector<int> res;
        while(k--) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
