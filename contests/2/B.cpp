#include<iostream>
#include<vector>
using namespace std;

void replace(int ind, vector<int> array,bool flag){
if(flag){
    array[ind]=max(array[ind+1],array[ind]);
    array.erase(ind);
}
else{
    array[ind]=min(array[ind+1],array[ind]);
    array.erase(ind);
}
}

int main(){
int t;
cin>>t;
while(t--){
    int n;
    vector<int> arr;
    cin>>n;
    int min,max;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i=0){
        max=arr[0];
        min=arr[0];
        } 
        if(max<arr[i]) arr[i]=max;
        if(min>arr[i]) arr[i]=min;

    }

    for(int i=0;i<n;i++){
        if(arr[i]==min){
            replace(i,arr,true);
        }
    }

    //select minimum


}
    return 0;
}