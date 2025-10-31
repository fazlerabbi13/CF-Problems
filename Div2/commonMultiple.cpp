#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=105;
int n,arr[maxn];
int main(){
   int T;
   cin>>T;
   while(T--){
      cin>>n;
      for(int i=1;i<=n;i++)
         cin>>arr[i];
      int ans=0;
      for(int i=1;i<=n;i++){
         int add=1;
         for(int j=1;j<i;j++){
             if(arr[j]==arr[i]){
                add=0;
             }  
        }  
         ans+=add;
      }
      cout<<ans<<"\n";
   }
   return 0;
}