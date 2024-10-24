// Rabin Karp implementation
// #include "stdfns.h"
// uncomment above line to use rollinghash directly.
#include <iostream>
using namespace std;

#define vi vector<int>;
#define ll long long

void solve() {
  string s;
  cin >> s;

  int isGoodArr[26];
  for (int i = 0; i < 26; i++) {
    cin >> isGoodArr[i];
  }
  // int hashedString = compute_polynomialhash(s);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
}
