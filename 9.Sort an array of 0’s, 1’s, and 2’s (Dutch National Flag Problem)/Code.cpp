#include<iostream>
#include<vector>
#include<utility>
using namespace std;
void s_012(vector<int>&arr){
    int left =0;
    int right = arr.size()-1;
    int mid =0;
    while(mid<=right){
        switch(arr[mid]){
            case 0:
             swap(arr[left++],arr[mid++]);
             break;
            case 1: 
             mid++;
             break;
            case 2:
             swap(arr[mid],arr[right--]);
             break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    s_012(arr);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}