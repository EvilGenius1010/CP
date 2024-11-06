#include <algorithm>
#include <iostream>
using namespace std;
#define vi = vector<int>;

void solve() {
  int a, b, c, n;
  cin >> a >> b >> c >> n;
  int maxno = max(c, max(a, b));
  int minno = min(c, min(a, b));
  int midno = a + b + c - minno - maxno;

  int mincoins = maxno - minno + maxno - midno;
  if (mincoins > n) {
    cout << "NO" << "\n";
    return;
  }
  if ((n - mincoins) % 3 == 0) {
    cout << "YES" << "\n";
    return;
  } else {
    cout << "NO" << "\n";
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
