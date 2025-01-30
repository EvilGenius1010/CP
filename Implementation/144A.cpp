#include <iostream>
#include<vector>
#include<map>
#include<cmath>
#include<array>
using namespace std;
#define vi vector<int>;
#define ll long long
#define el "\n"

void solve() {
    int t;
    cin>>t;
    int arr[t];
    // cout<<t<<"\n";
    int max_val,min_val,min_ind,max_ind;
    for(int i=0;i<t;i++){
        cin>>arr[i];
        if(i==0){
            max_val=arr[0];
            max_ind=0;
            min_ind=0;
            min_val=arr[0];
        }
        else{
            if(arr[i]>=max_val){
                max_val=arr[i];
                max_ind=i;
                // cout<<max_ind<<"max"<<el;
            }
            if(arr[i]<=min_val){
                min_val=arr[i];
                min_ind=i;
                // cout<<min_ind<<"min"<<el;
            }
        }
    }
    // cout<<max_ind<<el<<min_ind<<el;
    if(max_ind>min_ind){    //they swap each other resulting in two position moves in one sec.
    cout<<max_ind+(t-min_ind-2)<<"\n";
    }
    else{
    cout<<max_ind+(t-min_ind-1)<<"\n";
    }
    



}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);


    solve();
}
