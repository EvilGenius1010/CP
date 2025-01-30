#include <iostream>
#include<vector>
#include<map>
#include<array>
#include<cmath>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void solve() {
    int n;
    cin >> n;
    vector<int> temp(n,0);
    // array<int,n> temp;
    // temp.fill(0);
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i]; //2
        temp[arr[i]-1] = arr[i];//temp[2-1]=arr[i]=2
    }
    // for(int i=0;i<n-1;i++){
    //     if(temp[i]==0){
    //         cout<<temp[i]+1<<el;
    //     }
    // }
  vector<int>::iterator iter = temp.begin();

 for(iter;iter<temp.end();iter++) {
        // cout<<*iter<<el;
    if(*iter==0){
        cout<<*(iter-1)+1<<el;
    }
 }


}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);


    solve();
}
