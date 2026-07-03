#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the array length:";
    int n,flag=0;
    cin>>n;
    int arr[n],i;
    cout<<"Enter the array:";
    for (i=0;i < n; i++){
        cin>>arr[i];
    }
    for(i=1;i<n ;i++){
        if(arr[i-1]>arr[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Not Sorted";
    }
    else{
        cout<<"Sorted";
    }
}