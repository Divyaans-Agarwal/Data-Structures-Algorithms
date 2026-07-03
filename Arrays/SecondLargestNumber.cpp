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
    int largest=arr[0],SecLargest=-1;
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            SecLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>SecLargest){
            SecLargest=arr[i];
        }
    }
    cout<<SecLargest;
}