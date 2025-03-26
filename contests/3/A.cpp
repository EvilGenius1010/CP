#include <iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
#define vi vector<int>
#define ll long long
#define el "\n"

void solve() {
  int n;
  cin >> n;
 //shud have 3 zeros,2 twos, 1 one,three,five.
int arr[n];
int arr1[5]={3,2,1,1,1};
if(n<8){
    cout<<0<<"\n";
    return;
}
//first is no, second is quantity
map<int,int> mp;
mp[0] = 3;
mp[2] = 2;
mp[1] = 1;
mp[3] = 1;
mp[5] = 1;


int count = 0;
 for(int i=0;i<n;i++){
     cin>>arr[i];
     if(arr[i]==0 ){
         mp[0]--;
         count++;
         if(mp[0]<=0 && mp[2]<=0 && mp[1]<=0 && mp[3]<=0 && mp[5]<=0){
             cout<<count<<"\n";
             return;
         }
         
     }
     else if(arr[i]==2 ){
         mp[2]--;
         count++;
         if(mp[0]<=0 && mp[2]<=0 && mp[1]<=0 && mp[3]<=0 && mp[5]<=0){
             cout<<count<<"\n";
             return;
         }
     }
     else if(arr[i]==1 ){
         mp[1]--;
         count++;
         if(mp[0]<=0 && mp[2]<=0 && mp[1]<=0 && mp[3]<=0 && mp[5]<=0){
             cout<<count<<"\n";
             return;
         }
     }
     else if(arr[i]==3 ){
         mp[3]--;
         count++;
         if(mp[0]<=0 && mp[2]<=0 && mp[1]<=0 && mp[3]<=0 && mp[5]<=0){
             cout<<count<<"\n";
             return;
         }
     }
     else if(arr[i]==5 ){
         mp[5]--;
         count++;
         if(mp[0]<=0 && mp[2]<=0 && mp[1]<=0 && mp[3]<=0 && mp[5]<=0){
             cout<<count<<"\n";
             return;
         }
         
     }
     else{
        if(mp[0]<=0 && mp[2]<=0 && mp[1]<=0 && mp[3]<=0 && mp[5]<=0){
            cout<<count<<"\n";
            return;
        }
         count++;
         continue;
     }
 }


 if(mp[0]<=0 && mp[2]<=0 && mp[1]<=0 && mp[3]<=0 && mp[5]<=0){
    cout<<count<<"\n";
    return;
}
 if(mp[0]>0 || mp[2]>0 || mp[1]>0 || mp[3]>0 || mp[5]>0){
    cout<<0<<"\n";
    return;
}
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll t;
  cin >> t;
  while (t--)
    solve();
}
