#include <iostream>
using namespace std;

int gcd(int a,int b){
  while(a>0 && b>0){
    if(a>b) a %=b;
    else b %=a;
  }
  if(a==0) return b;
  return a;
}

int gcdandlcm(int a,int b,int gcd_value){
   int lcm = (a*b)/gcd_value;
  return lcm;
}  

int main() {
   int res =  gcd(10,5);
    cout<<"The LCM is "<<gcdandlcm(10, 5, res)<<" and the GCD is "<<res<<endl;
}