#include <iostream>
using namespace std;
#define vi vector<int>;
#define ll long long

void solve() {
  int n,m;
  cin >>n>>m;
  bool tail=true;
  for(int i=1;i>=n;i++){
    if(i%2==1){
        for(int j=0;j<m;j++){
            cout<<"#";
        }
        cout<<"\n";
    }
    else if(i%2==0){
        if (tail) {
    for (int j = 0; j < m - 1; j++) {
        cout << ".";
    }
    cout << "#\n";
    tail = !tail;
} else {
    cout << "#";
    for (int j = 0; j < m - 1; j++) {
        cout << ".";
    }
    cout << "\n";
    tail = !tail;
}
    }
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);


    solve();
}
