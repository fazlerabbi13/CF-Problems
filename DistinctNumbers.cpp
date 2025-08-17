#include<bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int N){
    if(N==0){
        return 0;
    }
    int distinctCount=1;
    for(int i=1;i<N;++i){
        bool isDistinct=true;
        for(int j=0;j<i;++j){
            if(arr[i]==arr[j]){
                isDistinct=false;
                break;
            }
        }
        if(isDistinct){
            distinctCount++;
        }
    }
    return distinctCount;
}

int main(){
    int N;
    cin>> N;
    int arr[N];
    for(int i=0; i < N; ++i){
        cin>>arr[i];
    }
    cout<<countDistinct(arr,N)<<endl;
    return 0;
}