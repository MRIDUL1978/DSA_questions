class Solution {
  public:
    void replaceWithRank(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<pair<int,int>> v;
        
        for(int i=0; i<n; i++) {
            v.push_back({arr[i],i});
        }
        
        sort(v.begin(),v.end());
        
        for(int i=0; i<n; i++) {
            arr[v[i].second] = i;
        }   
    }
};
