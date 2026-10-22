#include<iostream>
#include "../my_sort/Bubble_sort.hpp"
#include<vector>
#include<algorithm>
using namespace std;
// Luu cac gia tri 
struct Node{
    int sum;
    int index;
    bool operator> (const Node &other){
        if(sum!=other.sum) return sum>other.sum;
        return index>other.index;
    }
      bool operator< (const Node &other){
        if(sum!=other.sum) return sum<other.sum;
        return index<other.index;
    }
};
void inMangcon(vector<int>&arr,int start,int  end){
    cout<<"{";
    for(int i=start;i<=end;++i){
        cout<<arr[i]<<(i==end ? "":",");
    }
    cout<<"}\n";
}
bool KiemtravaIn(vector<int>&arr){
    int n =arr.size();
    if(n==0) return false;
    vector<Node>pre_sum;
    pre_sum.reserve(n+1);
    pre_sum.push_back({0,-1});
    int cur_sum=0;
    for(int i=0;i<n;i++){
        cur_sum+=arr[i];
        pre_sum.push_back({cur_sum,i});
    }
    bubble_sort(pre_sum);
    bool coMangcon = false;
    for(int i=0;i<pre_sum.size();i++){
        for(int j=i+1;j<pre_sum.size()&&pre_sum[i].sum==pre_sum[j].sum;j++){
            if(!coMangcon){
                cout<<"Mang con la: \n";
                coMangcon=true;
            }
            int start = min(pre_sum[i].index,pre_sum[j].index)+1;
            int end= max(pre_sum[i].index,pre_sum[j].index);
            inMangcon(arr,start,end);
        }
        }
        if(!coMangcon){
            cout<<"Khong co";
    }
    return coMangcon;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    KiemtravaIn(arr);
    return 0;
}