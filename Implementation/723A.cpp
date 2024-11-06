#include <iostream>
using namespace std;
#define vi vector<int>;
#define ll long long

void solve() {
  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;
  int maxDistPt = max(x1, max(x2, x3));
  int minDistPt = min(x1, min(x2, x3));

  // independent of midDistPt
  //  int midDistPt = x1 + x2 + x3 - maxDistPt - minDistPt;

  cout << (maxDistPt - minDistPt);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
}
