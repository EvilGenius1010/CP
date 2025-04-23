#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void solve() {
  ll n;
  cin >> n;

  ll tmp1;

  int counter = 0;
  while (n > 0) {
    tmp1 = n % 10;
    if (tmp1 == 4 || tmp1 == 7) {
      counter = counter + 1;
    }
    n = n / 10;
  }

  if (counter == 4 || counter == 7) {
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
}
