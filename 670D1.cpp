#include<iostream>
using namespace std;

void take_input(int arr[],int lim){
for(int i=0;i<lim;i++){
        cin>>arr[i];
    }

}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n],b[n];

    take_input(a,n); //passing a[n] means you are not passing an array 
    take_input(b,n);

    int capab=0;
    int cookies=0;
    int needed=0;
    int i=0;
    while(k>=0 && i<n){

    for(;i<n;i++){
        // check without mutating 
        if(b[i]-a[i]>=0){
            capab++;
        }
        else{
            needed=needed+(b[i]-a[i]);
        }
    }
    if(capab==n){
        cookies++;
        for(int l=0;l<n;l++){
            b[i]=(b[i]-a[i]);
        }
    }
    else if(needed<=k){
        k=k-needed;
        for(int l=0;l<n;l++){
            if(b[i]>=a[i]){   
            b[i]=b[i]-a[i];
            }
            else{
            b[i]=0;
            }
        }
        cookies++;
    }
    else if(needed>k){
        cout<<cookies<<endl;
        return 0;
    }
    }


    return 0;
}