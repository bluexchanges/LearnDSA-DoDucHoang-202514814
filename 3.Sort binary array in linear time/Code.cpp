#include<iostream>
#include<vector>
#include<utility>
using namespace std;
void Sort_binary_lineartime(vector<int>&arr){
    int k =0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            swap(arr[i],arr[k]);
            k++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>binary_arr(n);
    for (int i=0;i<n;i++){
        cin>> binary_arr[i];
    }
    Sort_binary_lineartime(binary_arr);
    for(int i=0;i<n;i++){
        cout<< binary_arr[i]<<" ";
    }
}