#include <iostream>
using namespace std;
using vi = vector<int>;
#define ll long long

void solve() {
  // parse to find number of b's,c's and s's.
  string s;
  cin >> s;
  int req[3] = {0, 0, 0};
  for (char c : s) {
    if (c == 'b') {
      req[0]++;
    } else if (c == 's') {
      req[1]++;
    } else {
      req[2]++;
    }
  }

  int nb, ns, nc;
  cin >> nb >> ns >> nc;

  int pb, ps, pc;
  cin >> pb >> ps >> pc;

  int budget;
  cin >> budget;

  // form equation.
  int x;

  // run binary search
  ll left = 0, right = 1e12;
  while (left <= right) {
    ll mid = (left + right) >> 1;
    int cost = req[0] * (mid - nb) + req[1] * (mid - ns) + req[2] * (mid - nc);

    if (cost > budget) {
      right = mid - 1;
    } else if (cost < budget) {
      left = mid + 1;
    } else {
      cout << mid << "\n";
      break;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
}
