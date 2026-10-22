#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>&arr){
    int n=arr.size();
    int val =0;
    for(int x:arr){
        val^=x;
    }
    for(int i=1;i<=n-1;++i){
        val ^=i;
    }
    return val;
}
int main(){
    int n;
    cin>>n;
    if(n==0) return -1;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    cout<<"The duplicate element is: "<<findDuplicate(arr);
    return 0;
}