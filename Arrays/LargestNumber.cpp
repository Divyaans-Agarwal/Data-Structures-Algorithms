#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the array length"<<"\n";
    cin>>n;
    int i,arr[n];
    cout<<"Enter the array elements: \n";
    for(i=0;i<n ;i++){
        cin>>arr[i];
    }
    int x=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>x){
            x=arr[i];
        }
    }
    cout<<x;
}