#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void group_elements(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return;
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    vector<int> freq(max_val + 1, 0);
    for (int x : arr) {
        freq[x]++;
    }
    vector<bool> visited(max_val + 1, false);
    vector<int> result;
    result.reserve(n);

    for (int i = 0; i < n; i++) {
        int val = arr[i];
        if (!visited[val]) {
            for (int k = 0; k < freq[val]; ++k) {
                result.push_back(val);
            }
            visited[val] = true;
        }
    }
    arr = result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    group_elements(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}