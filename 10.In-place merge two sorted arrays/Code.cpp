#include <iostream>
#include <vector>
#include <utility>
using namespace std;
void inPlace(std::vector<int>& X, std::vector<int>& Y) {
    int m = X.size();
    int n = Y.size();
    for (int i = 0; i < m; ++i) {
        if (X[i] > Y[0]) {
            swap(X[i], Y[0]);
            int first = Y[0];
            int k = 1;
            while (k < n && Y[k] < first) {
                Y[k - 1] = Y[k];
                k++;
            }
            Y[k - 1] = first;
        }
    }
}
int main(){
    int n,m;
    cin>>n;
    vector<int>X(n);
    for(int i =0;i<n;i++){
        cin>>X[i];
    }
    cin>>m;
    vector<int>Y(m);
    for(int i =0;i<m;i++){
        cin>>Y[i];
    }
    inPlace(X,Y);
    for(int i =0;i<n;i++){
        cout<<X[i]<<" ";
    }
    cout<<'\n';
    for(int i =0;i<m;i++){
        cout<<Y[i]<<" ";
    }
}