#include <iostream>
#include<vector>
#include<map>
#include<cmath>
// #include<all_headers.h>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void solve() {
  int n,m;
  int counter=0;
  cin >> n >>m;
  char dirx_arr[n][m];
  for(int i=0;i<n;i++){
   for(int j=0;i<m;j++){
    cin>>dirx_arr[i][j];
    if(i==n-1 && dirx_arr[i][j]=='D'){
        counter+=1;
    }
    else if(j==m-1 && dirx_arr[i][j]=='R'){
      counter+=1;
    }
  } 
  }

  cout<<counter<<"\n";
  return;

  
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}
