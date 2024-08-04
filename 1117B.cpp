#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m,k;
    cin>>n,m,k;
    int happiness[n]; //use array as size of array is fixed at compile time.
    // int max_happiness=0;
    for(int i=0;i<n;i++){ 
        cin>>happiness[i];
        // if(happiness[i]>max_happiness){
        //     max_happiness = happiness[i];
        // }
    }

    std::sort(happiness,happiness+n);
    int largest_happiness = happiness[n-1];
    int second_largest_happiness = happiness[n-2];

    for(int i=0;i<m;i++){
        
    }



    //find second largest element in array.
    // vector<int> happiness; //imp to include<vector>
    // for (int i = 0; i < n; i++){
    //     cin>>happiness[i];
    // }

    return 0;
}