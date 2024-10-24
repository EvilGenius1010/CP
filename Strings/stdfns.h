#include <iostream>
using namespace std;
using vi = vector<int>;
#define ll long long

// void solve() {
//   int n;
//   cin >> n;
//   // Your code here
// }
//
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//
//   int t;
//   cin >> t;
//   while (t--)
//     solve();
// }

long long compute_polynomialhash(string const &s) {
  const int p = 31;      // larger than no of unique alphabets
  const int m = 1e9 + 9; // as large to prevent collision
  long long hash_value = 0;
  long long p_pow = 1;
  for (char c : s) {
    hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
    p_pow = (p_pow * p) % m;
  }
  return hash_value;
}
