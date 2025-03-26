#include <iostream>
#include<vector>
#include<map>
#include<cmath>
#include <algorithm>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void solve() {
    int n;
    ll x;
    cin>>n>>x;
    ll arr[n];
    for(int i=0;i<n;i++){
        ll a;
        cin>>arr[i];
    }   
    sort(arr,arr+n);

    int i=0;
    while(arr[i]<=x){
        i++;
    }   
    ll min1[i+1];
     for(int j=0;j<=i;j++){
        min1[j] = arr[j];
    }
    ll min2 = min(min1[i],x);


}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}
