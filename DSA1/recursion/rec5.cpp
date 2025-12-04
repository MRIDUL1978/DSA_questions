// factorial of numbers

#include<iostream>
using namespace std;
class base{
    public:
        int factorial(int n){
            if(n==0) return 1;
            return n*factorial(n-1);
        }
};
int main(){
base b;
int res = b.factorial(3);
cout<<res;
return 0;
}