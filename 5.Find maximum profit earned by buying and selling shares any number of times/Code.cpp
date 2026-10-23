#include<iostream>
#include<vector>
using namespace std;
void findMaxProfit(vector<int>&price){
    int n= price.size();
    if(n<=1) return;
    int i =0;
    int profit =0;
    while(i<n-1){
        while(i<n-1&&price[i]>=price[i+1]){
            ++i;
        }
        int buy_day=i;
        while(i<n-1&&price[i]<=price[i+1]){
            ++i;
        }
        int sell_day=i;
        if(sell_day>buy_day){
            profit+=price[sell_day]-price[buy_day];
            cout<< "Buy on day "<<(buy_day+1)<<" and "<<"sell on day "<<(sell_day+1)<<endl;
        }
    }
    cout<<"Total profit: "<< profit;
}
int main(){
    int n;
    cin>>n;
    vector<int>price(n);
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    findMaxProfit(price);
}