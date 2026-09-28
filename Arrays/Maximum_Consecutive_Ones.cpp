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
    int c1=0,c2=0;
    for(i=0;i<n;i++){
        if(arr[i]==1){
            c1++;
            if(c2<c1){
                c2=c1;
            }
        }
        else{
            c1=0;
        }
    }
    cout<<c2;
}