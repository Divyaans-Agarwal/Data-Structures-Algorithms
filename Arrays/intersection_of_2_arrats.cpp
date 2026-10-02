#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> nums1(n), nums2(m);
    for(int i = 0; i < n; i++) cin >> nums1[i];
    for(int i = 0; i < m; i++) cin >> nums2[i];

    int i = 0, j = 0;
    vector<int> result;

    while(i < n && j < m){
        if(nums1[i] < nums2[j]){
            i++;
        }
        else if(nums2[j] < nums1[i]){
            j++;
        }
        else{
            result.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    for(int k = 0; k < result.size(); k++){
        cout << result[k] << " ";
    }
}