#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void solve() {
  int k, num;
  cin >> num >> k;
  while (k > 0) {
    if (num % 10 == 0) {
      num /= 10;
      k--;
    } else {
      num -= 1;
      k--;
    }
  }
  cout << num << "\n";
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
}
