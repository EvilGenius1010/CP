#include <iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void solve() {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr, arr + n);

    string parity[n];
    for(int i=0;i<n;i++) {
        if(arr[i]%2 == 0) {
            parity[i] = "even";
        } else {
            parity[i] = "odd";
        }
    }

    if((arr[0]+arr[n-1])%2 == 0) {
        cout <<0<< "\n";
        return;
    } else {
        string minA = parity[0];
        string maxA = parity[n-1];
        int opA=1,opB=1;
        for(int i=1;i<(n-1);i++) {
            if(parity[i] == minA) {
                opA++;
            }
            else{
                break;
            }

        }

        for(int i=n-2;i>0;i--) {
            if(parity[i] == maxA) {
                opB++;
            }
            else{
                break;
            }
        }

        cout<<min(opA, opB) << "\n";
        return;
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
