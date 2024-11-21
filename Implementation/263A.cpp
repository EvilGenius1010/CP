#include <iostream>
using namespace std;
#define vi vector<int>;
#define ll long long

void solve() {
  int arr[5][5];
//take input as 2d array
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
    cin >> arr[i][j];
    if(arr[i][j]==1){
            cout<<(abs(i-3+1)+abs(j-3+1))<<"\n";
        }
    }
}
//find nearest distance to (3,3).
//add 1 as rows and cols start with 1 hence



}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
    solve();
}
