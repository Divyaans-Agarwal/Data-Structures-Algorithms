#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<"\n";
    int i,copy;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    copy=arr[0];
    for(i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=copy;
    for(i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}