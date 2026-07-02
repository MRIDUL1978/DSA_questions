class Solution {
  public:
  
    struct item {
        double ratio;
        int value;
        int wt;
    };
        
    static bool cmp(item &a, item &b) {
        return a.ratio > b.ratio;
    }
    
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        
        vector<item> res;
        for(int i=0; i<wt.size(); i++) {
            res.push_back({(double)val[i]/wt[i], val[i], wt[i]});
        }
        
        sort(res.begin(), res.end(), cmp);
        
        double ans = 0;
        int currWt = 0;
        for(auto &num : res) {
            if(num.wt + currWt <= capacity) {
                currWt += num.wt;
                ans += num.value; 
            }else{
                double x = (double)(capacity - currWt) / num.wt;
                ans += num.value * x;
                break;
            }
        }
        return ans;
    }
};
