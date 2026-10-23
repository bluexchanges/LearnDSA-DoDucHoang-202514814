#include <iostream>
#include <vector>
#include <algorithm>
#include "../my_sort/Bubble_sort.hpp"
using namespace std;

void findTriplets(vector<int>& num, int target) {
    int n = num.size();
    if (n < 3) {
        cout << "No triplet exists\n";
        return;
    }
    bubble_sort(num);
    bool found = false;
    for (int i = 0; i < n - 2; ++i) {
        if (i > 0 && num[i] == num[i - 1]) continue;
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int cur_sum = num[i] + num[left] + num[right];

            if (cur_sum == target) {
                if (!found) {
                    cout << "Triplet exists.\n";
                    cout << "The triplets with the given sum " << target << " are: ";
                    found = true;
                }
                cout << "{" << num[i] << ", " << num[left] << ", " << num[right] << "} ";
                while (left < right && num[left] == num[left + 1]) left++;
                while (left < right && num[right] == num[right - 1]) right--;

                left++;
                right--;
            } 
            else if (cur_sum > target) {
                right--;
            } 
            else {
                left++;
            }
        }
    }
    if (!found) {
        cout << "No triplet exists\n";
    } else {
        cout << "\n";
    }
}

int main() {
    int n, target;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> target;
    findTriplets(num, target);
    return 0;
}