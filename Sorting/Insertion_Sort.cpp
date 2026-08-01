#include <iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter the array length"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements \n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    for(i=1;i<n;i++){
        for(j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
        for(k=0;k<n;k++){
            cout<<arr[k]<<", ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
}