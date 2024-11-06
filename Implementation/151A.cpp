#include <iostream>
using namespace std;
#define vi vector<int>;
#define ll long long

void solve() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int drinkQuantity = k * l;
  int totalLimes = c * d;

  int toasts = 0;
  while (drinkQuantity >= nl && totalLimes >= 1 && p >= np) {
    drinkQuantity -= nl;
    totalLimes -= 1;
    p -= np;
    toasts++;
  }

  cout << toasts / n << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
}
