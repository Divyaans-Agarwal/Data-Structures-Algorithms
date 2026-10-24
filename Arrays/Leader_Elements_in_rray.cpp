#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of the element"<<endl;
    cin>>n;
    int i,arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=arr[n-1];
    cout<<k<<" ";
    for(i=n-2;i>0;i--){
        if(arr[i]>k){
            cout<<arr[i]<<" ";
            k=arr[i];
        }
    }
}