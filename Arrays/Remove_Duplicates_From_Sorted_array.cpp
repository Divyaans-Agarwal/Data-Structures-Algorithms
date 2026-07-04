#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<"\n";
    int i,pointer=1;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            arr[pointer]=arr[i];
            pointer++;
        }
    }
    cout<<pointer<<endl;
    for(i=0;i<pointer;i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}