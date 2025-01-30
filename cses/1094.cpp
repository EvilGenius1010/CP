#include <iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void solve() {
    int n;
    cin >> n;
    int arr[n];
    ll count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i]<<"c ";
        if(i==0)continue;
        if(arr[i]>=arr[i-1])continue;
        else{
            count+= (arr[i-1]-arr[i]);
            // cout<<count<<" ";
            arr[i]+=(arr[i-1]-arr[i]);
            // cout<<arr[i]<<el;
        }
    }
    cout<<count<<el;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);


    solve();
}
