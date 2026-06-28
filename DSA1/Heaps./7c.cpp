class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<vector<int>> bucket(n+1);
        vector<int> res;
        for(int x : nums) mp[x]++;
        for(auto &it : mp) {
            bucket[it.second].push_back(it.first);
        }

        for(int i=n; i>= 0 && res.size() < k; i--) {
            for(int x : bucket[i]){
                res.push_back(x);
                if(res.size() == k) break;
            }
        }
    return res;
    }
};
