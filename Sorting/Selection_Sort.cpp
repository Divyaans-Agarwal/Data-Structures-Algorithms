#include <iostream>
using namespace std;
int main(){
    cout<<"ENter the array length"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements \n";
    int i,j,min;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
} 
