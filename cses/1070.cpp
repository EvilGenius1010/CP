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
  // int temp;
  if(n==2 ||n==3){
    cout<<"NO SOLUTION"<<el;
    return;
  }

//all even
    for(int i=2;i<=n;i+=2){
    cout<<i<<" ";
  }


  //all odd
  for(int i=1;i<=n;i+=2){
    cout<<i<<" ";
  }


  
  cout<<el;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);


    solve();
}
