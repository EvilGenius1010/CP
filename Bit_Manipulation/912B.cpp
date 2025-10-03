#include <iostream>
using namespace std;
#define ll long long
#define el "\n"

void solve() {
    // ll n, k;
    // cin >> n >> k;
    
    // // Find number of bits in n
    // int bits = 0;
    // ll temp = n;
    // while (temp > 0) {
    //     temp >>= 1;
    //     bits++;
    // }
    
    // ll result;
    // if (k >= bits) {
    //     // Can achieve 2^bits - 1
    //     result = (1LL << bits) - 1;
    // } else {
    //     // Can only achieve 2^k - 1  
    //     result = (1LL << k) - 1;
    // }
    
    // cout << result << endl;

    ll n,k;
    cin>>n>>k;

    // n will be the max number
    if(k==1){
        cout<<n<<el;
        return;
    }else{
        // find no of bits of n and make them all 1.

        //find the MSB no.
        ll temp =n;
        int count=0;
        while(temp>0){
            temp>>=1;
            count++;
        }
        ll result=1;
        for(int i=0;i<count-1;i++){
            result=(result<<1)^1;
        }
        cout<<result<<el;
        return;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
