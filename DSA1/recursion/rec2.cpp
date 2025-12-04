// print linearly from 1 to n

#include<iostream>
using namespace std;
class Base{
    public:
        void print(int N){
            if(N>0){
                print(N-1);
                cout<<N<<" ";
            }
        }
};
int main(){
Base b;
b.print(5);
return 0;
}