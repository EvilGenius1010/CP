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

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] == 1) {
      cout << "HARD" << "\n";
      return;
    }
  }
  cout << "EASY" << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();
}
