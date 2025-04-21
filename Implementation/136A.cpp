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
  int inputarr[n], outputarr[n];

  for (int i = 0; i < n; i++) {
    cin >> inputarr[i];
    // cout << "a" << "\n";
    outputarr[inputarr[i] - 1] = i + 1;
  }

  for (int i = 0; i < n; i++) {
    cout << outputarr[i] << "\n";
  }
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
}
