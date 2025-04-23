#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int> > info;
  //
  int max = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    info.push_back({a, b});
    if (b - a > 0) {
      max += b - a;
    }
    cout << max << "\n";
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
