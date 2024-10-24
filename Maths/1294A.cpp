#include <algorithm>
#include <iostream>
using namespace std;
using vi = vector<int>;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  int maxno = max(c, max(a, b));
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}
