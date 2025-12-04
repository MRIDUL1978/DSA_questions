// to check if  the rnumber is amstrong number or not
#include<iostream>
#include<cmath>
using namespace std;
class A{
    public:
    bool amstrong(int x){
        int cntDigits;
        int dup = x;
        int sum = 0;
        int ld;
        while(x!=0){
            int ld = x%10;
            sum = sum + pow(ld,cntDigits);
            x=x/10;
        }
        if(sum==dup) cout<<"Amstrong Number";
        else cout<<"Not Amstrong Number ";
    }
};

int main(){
    int a;
    cin>>a;
    A a1;
    a1.amstrong(a);
return 0;
}