class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> mp;
        vector<int> res;
        for(int x : nums) mp[x]++;
        for(auto &it : mp) {
            pq.push({it.second,it.first});
        }
        while(k--) {
           res.push_back(pq.top().second);
           pq.pop();
        }
    return res;
    }
};
