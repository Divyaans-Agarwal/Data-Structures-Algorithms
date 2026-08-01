#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr,int left, int mid, int right){
    int i=left,j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=right){
        if(arr[j]>=arr[i]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while(j<=right){
        temp.push_back(arr[j++]);
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    for(int k=left;k<=right;k++){
        arr[k]=temp[k-left];
    }
}
void mergeSort(vector<int>& arr,int left, int right){
    if(left>=right){
        return;
    }
    int mid=left+(right-left)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);

}
int main(){
    cout<<"Enter the length of the array"<<endl;
    int length;
    cin>>length;
    vector<int> arr(length);
    cout<<"Enter the aray:"<<endl;
    int i;
    for(i=0;i<length;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,length-1);
    for(i=0;i<length;i++){
        cout<<arr[i]<<", ";
    }
}