#include <iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void solve() {
  int n,m;
  cin >> n>>m;

  int arr[n];
  for(int i=0;i<n;i++){
  cin>>arr[i];
  }

  //use greedy
  for(int i=0;i<n;i++){
  if(arr[i]<=arr[i+1]){
	//increasing order
	continue;
  }
  else{
  	while(arr[i]>arr[i+1]){
		
	}
  }
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);


    solve();
}
