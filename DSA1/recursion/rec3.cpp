// pr int n to 1
#include<iostream>
using namespace std;
class Base{
    public:
        void print(int N){
            if(N>0){
                cout<<N<<" ";
                print(N-1);
            }
        }
};
int main(){
    Base b;
    b.print(5);
return 0;
}