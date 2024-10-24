#include <algorithm>
#include <iostream>
using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    ll h;
    cin >> n >> h;
    ll secs[n];
    for (int i = 0; i < n; i++) {
      cin >> secs[i];
    }

    ll low = 1;
    ll high = h;
    ll mid = (low + high) / 2;
    while (low <= high) {
      mid = (low + high) / 2;
      ll sum = mid;
      for (int i = 0; i < n - 1; ++i) {

        // sum = sum + min(mid,secs[i+1]-secs[i]);
        sum += min(mid, (ll)(secs[i + 1] - secs[i]));
      }
      if (sum < h) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
    cout << high + 1 << "\n";
  }
  return 0;
}

// int main(){
// int t;
// cin>>t;
// while(t--){
//     int n;
//     ll h;
//     cin>>n>>h;
//     int secs[n];
//     for(int i=0;i<n;i++){
//         cin>>secs[i];
//     }

//     ll base = h/n,dmg;
//     bool exceed=false,dip=false;
//     ll k;

// }
//     return 0;
// }

// void calculatedmg(int arr[], ll h){
//     for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){

//     }
// }
