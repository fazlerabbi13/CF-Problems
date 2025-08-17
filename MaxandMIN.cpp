#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>&arr,int n){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

// int findMax(vector<int>&arr,int n){
//     int max=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;
// }





