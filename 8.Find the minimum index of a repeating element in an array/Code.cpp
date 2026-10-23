#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMinIndex(const vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return -1;
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) max_val = arr[i];
    }
    vector<int> count(max_val + 1, 0);
    int min_index = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (count[arr[i]] > 0) {
            min_index = i;
        }
        count[arr[i]]++;
    }
    return min_index;
}

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = findMinIndex(arr);
    if (ans != -1) {
        cout << "The minimum index of the repeating element is " << ans << endl;
    } else {
        cout << "Invalid Input" << endl;
    }
    return 0;
}