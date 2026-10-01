#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout<<"Enter the length of both arrays"<<"\n";
    int m,n;
    cin>>m>>n;
    int arr1[m],arr2[n];
    cout<<"Enter the arrays "<<endl;
    int i,j;
    for(i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(i=0;i<n;i++){
        cin>>arr2[i];
    }
    i=j=0;
    vector<int> un;
    while(i<m && j<n){
        if(i>0 && arr1[i] == arr1[i-1]){
            i++;
            continue;
        }
        if(j>0 && arr2[j]== arr2[j-1]){
            j++;
            continue;
        }
        if(arr1[i]< arr2[j]){
            un.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i] > arr2[j]){
            un.push_back(arr2[j]);
            j++;
        }
        else{
            un.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<m){
        if(i==0 || arr1[i] != arr1[i-1])
            un.push_back(arr1[i]);
        i++;
    }
    while(j<n){
        if(j==0 || arr2[j] != arr2[j-1])
            un.push_back(arr2[j]);
        j++;
    }
    for(i=0;i<un.size();i++){
        cout<<un[i]<<" ";
    }
}