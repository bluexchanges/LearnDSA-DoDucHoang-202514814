#include<iostream>
#include<vector>
#include "../my_sort/Bubble_sort.hpp"
using namespace std;
void Find_pair(vector<int>&arr,int S ){
    if(arr.size()<2){
        cout<<"Khong tim thay";
        return;
    }
    bubble_sort(arr);
    int low =0;
    int high= arr.size()-1;
    bool found =false;
    while(low<high){
      long long sum = 1LL*arr[low]+arr[high];
      if(sum==S){
        cout<< "Pair found(" << arr[low]<< "," << arr[high] << ")\n";
        found =true;
        int left= arr[low];
        int right= arr[high];
        while(low<high&&arr[low]==left){
            low++;
        }
        while(low<high&&arr[high]==right){
            high--;
        }
      }else if(sum<S){
        low++;
      }else{high--;}
      
    }
   if(!found) cout<<"Khong tim thay\n";
}
int main(){
    int n,S;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>S;
    Find_pair(arr,S);
}