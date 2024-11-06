#include <iostream>
using namespace std;
#define vi vector<int>;
#define ll long long

void solve() {
  int x, y, n;
  cin >> x >> y >> n;
  // int left=0,right=n;
  // while(left<=right){
  //   int mid = (low+high)/2;
  //   if(mid-y%x==0)
  //   }
  int l = n % x;
  if (l > y) {
    cout << n - l + y << "\n";
    return;
  } else if (l == y) {
    cout << n << "\n";
    return;
  } else {
    // int c = 1;
    // while ((n - l - c) % x != y) {
    //   c += 1;
    // }
    cout << n - l - (x - y) << "\n";
    return;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}
