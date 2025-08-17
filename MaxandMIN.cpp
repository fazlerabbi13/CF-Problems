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

int findMax(vector<int>&arr,int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int N;
    cin>> N;
    vector<int>arr(N);

    for(int i=0;i<N; i++){
        cin>>arr[i];
    }
    int min=findMin(arr,N);
    int max=findMax(arr,N);

    cout<<min<<" "<< max;
    return 0;
}




