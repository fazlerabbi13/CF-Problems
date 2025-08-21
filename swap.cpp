#include<bits/stdc++.h>
using namespace std;

void swapNumber(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x,y;
    cin>>x>>y;
    swapNumber(x,y);
    cout<<x<<" "<<y;
    return 0;
}