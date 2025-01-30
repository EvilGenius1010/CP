#include <iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void solve() {
  ll n;
  cin >> n;
    cout<<n<<" ";
    while(n!=1){
        n%2==0?n/=2:n=(n*3)+1;
        cout<<n<<" ";
    }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);


    solve();
}
