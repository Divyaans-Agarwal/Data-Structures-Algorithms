#include <iostream>
using namespace std;
int main(){
    int n,i,j,didSwap;
    cout<<"Enter the array length"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements \n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=n-1;i>=0;i--){
        didSwap=0;
        for(j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap++;
            }
        }
        if(didSwap==0){
            break;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
}