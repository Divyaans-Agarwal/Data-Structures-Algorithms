#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the length of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<"\n";
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=0;
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    cout<<"Ther aray is: ";
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
}