#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the length"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    // using moore's voting algorythm
    int c=1,el=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            c++;
        }
        else{
            c--;
        }
        if(c=0){
            el=arr[i];
            c=1;
        }
    }
    c=0;
    for(i=0;i<n;i++){
        if(arr[i]==el){
            c++;
        }
    }
    if(c>n/2){
        cout<<"The majority number is: "<<el<<endl;
    }
    else{
        cout<<"No Majority number found"<<endl;
    }
    return 0;
}