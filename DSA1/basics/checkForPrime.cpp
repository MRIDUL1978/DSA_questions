#include<iostream>
#include<cmath>
using namespace std;
class Prime{
    public:
    bool isPrime(int x){
        int count = 0;
        int Sqrt = sqrt(x);
        for(int i=1;i<=Sqrt;i++){
            if(x%i==0){
            count++;
                if(x%i!=i) count++;
            }
        }
        if(count==2){
            cout<<"Is Prime "<<endl;
        }
        else cout<<"Not Prime "<<endl;
    }
};
int main(){
    int n;
    cin>>n;
    Prime P1;
    P1.isPrime(n);
return 0;
}