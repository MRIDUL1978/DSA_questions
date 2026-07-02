class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cnt5 = 0, cnt10 = 0;

        int i=0;
        for (int bill : bills) {
            if(bill == 5) cnt5++;
            else if(bill == 10){
                if(cnt5 == 0) return false;
                cnt5--;
                cnt10++;
            }
            else{
                if(cnt5 < 1 || cnt10 < 1) {
                    if(cnt5 < 3) return false;
                    cnt5 -= 3;
                }else {
                    cnt5--;
                    cnt10--;
                }
            }
        }
        return true;
    }
};
