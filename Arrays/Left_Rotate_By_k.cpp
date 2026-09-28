#include <iostream>
using namespace std;

void reverse(int arr[],int x,int y){
    int i=x,j=y;
    while(i<j){
        swap(arr[j],arr[i]);
        j--;
        i++;
    }
}
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
    cout<<"Enter the value of k"<<endl;
    int k;
    cin>>k;
    k=k%n;
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
    for(i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
