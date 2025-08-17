#include<bits/stdc++.h>
using namespace std;

void NTimes(int N,char C){
    for(int i=0;i<N;++i){
        cout<<C;
         if (i != N - 1) {
            cout << " ";
        }
    }
    cout << endl; 
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        char C;
        cin>>N>>C;
        NTimes(N,C);
    }
    return 0;
}

