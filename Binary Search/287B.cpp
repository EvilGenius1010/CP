#include<iostream>

#define ll long long

// void find_combo(ll n, ll k, int arr[]){

// }

// int main(){
//     ll n,k;
//     cin>>n>>k;
//     int arr[k-1];
//     for(int i=0;i<k;i++){
//         arr[i]= i+2;
//     }


//     return 0;
// }

using namespace std;

ll sum(ll n){
    return (n*(n+1))/2;
}

int main()
{
    ll n,k;
    cin>>n>>k;
    n-=1;
    ll s=sum(k-1);
    if(s<n)
    cout<<-1;
    else{
        ll l=0,h=k-1;
        while(l<=h){
            ll mid=l+(h-l)/2;
            if(s-sum(mid)>=n) l=mid+1;
            else h=mid-1;
        }
        cout<<k-1-h; // k-1-(h+1)+1
    }

    return 0;
}