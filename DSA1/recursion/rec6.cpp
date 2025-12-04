// reverse an array

/*#include<iostream>
using namespace std;
class Base{
    public: 
    
        void reverseArray(int *ptr,int l,int r){
            if(l>=r) return;
            swap(ptr[l],ptr[r]);
            reverseArray(ptr,l+1,r-1);
        }
};
int main(){
    int arr[6] = {1,2,3,4,5,6};
    Base b;
    b.reverseArray(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
return 0;
} */

// method 2

#include<iostream>
using namespace std;
void reversearray(int *ptr,int i,int n){
    if(i>=n/2) return;
    swap(ptr[i],ptr[n-i-1]);
    reversearray(ptr,i+1,n);
}
int main(){
    int arr[5] = {10,20,30,40,50};
     reversearray(arr,0,5);
     for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
     }
return 0;
}