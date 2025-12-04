#include<bits/stdc++.h>
using namespace std;
void explainvector(){
    vector<int> v;
    v.push_back(4);
    v.emplace_back(2);

    vector<int> :: iterator it = v.begin();
    cout<<*(it)<<" ";
    it++;
    cout<<*(it)<<" ";
}
int main(){
    explainvector();
return 0;
}