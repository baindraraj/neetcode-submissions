class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> hash;
        vector<vector<string>> res;
        for(int i =0;i<strs.size();i++) {
            vector<int> freq(26, 0);
            for(auto ch: strs[i]) {
                freq[ch-'a']++;
            }
            hash[freq].push_back(strs[i]);
        }
        for(auto i : hash) {
            res.push_back(i.second);
        }
        return res;
    }
};
