// to check if a string is palindrome or not

/*#include<iostream>
using namespace std;
bool isPlanidrome(string s,int i,int n){
    if(i>=n/2) return true;
     if(s[i] != s[n-i-1]) return false;
     return isPlanidrome(s,i+1,n);

}
int main(){
    string s = "madam";
    int n= s.length();
    bool result = isPlanidrome(s,0,n);
    if(result==true) cout<<"Is Palindrome "<<endl;
    else cout<< "Not Plaindrome "<<endl;

return 0;
} */


#include<iostream>
using namespace std;
bool isPalindrome(string s){
    string S;
    int left = 0;
    int right = s.length()-1;

    for(char c:s){
        if(isalnum(c)){
            S += tolower(c);
        }
    }
    while(left<right){
        if(S[left] != S[right]) return false;
        left++;
        right--;
    }
    return true;
}
int main(){
    string s ="madam";
    bool result = isPalindrome(s);
    if(result==true) cout<< " Is Palindrome "<<endl;
    else cout << " Not Palindrome "<<endl;
return 0;
}