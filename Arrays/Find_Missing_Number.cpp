#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the length of the array \n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array \n";
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=0;
    for(i=0;i<n;i++){
        x=x^arr[i]^(i+1);
    }
    cout<<"The missing number is: "<<x;
}