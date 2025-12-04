// sum of first n numbers

#include<iostream>
using namespace std;
class Base{
    public:
        int print(int N){
            if(N==0){
                return 0;
            }
           return N + print(N-1); 
        }
};
int main(){
    Base b;
   int res =   b.print(4);
   cout<<res;
return 0;
}