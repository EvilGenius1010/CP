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
  int num_arr[n];
  vector<int> odd_arr;
  for (int i = 0; i < n; i++) {
    cin >> num_arr[i];
    if (num_arr[i] % 2 == 1) {
      odd_arr.push_back(num_arr[i]);
    }
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
