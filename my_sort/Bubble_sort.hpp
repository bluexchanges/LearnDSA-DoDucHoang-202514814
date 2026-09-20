#ifndef bubble_sort_H
#define bubble_sort_H
#include<vector>
#include<algorithm> 
template <typename T>
void bubble_sort(std::vector<T> &arr){
    for(int i=0; i< arr.size();i++){
        for(int j=0;j<arr.size()-i-1;j++){
        if(arr[j]>arr[j+1]){
            T temp;
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
}
#endif
