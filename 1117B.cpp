/*#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m,k;
    cin>>n;
    cin>>m;
    cin>>k;
    int happiness[n]; //use array as size of array is fixed at compile time.

    for(int i=0;i<n;i++){ 
        cin>>happiness[i];
       
    }

    std::sort(happiness,happiness+n);//ascending order sort.
    int largest_happiness = happiness[n-1];
    int second_largest_happiness = happiness[n-2];

    int i=0;
    int maxhappiness = 0;
    while(i<m){

        for(int j=0;j<k;j++){
           if(i>m){
            cout<<maxhappiness<<endl;
            return 0;
           }
           maxhappiness = maxhappiness+largest_happiness; 
           i++;
        }
        maxhappiness=maxhappiness+second_largest_happiness;
        i++;
    }

    cout<<maxhappiness<<endl;
    return 0;
}*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    
    long long happiness[n];
    for (int i = 0; i < n; i++) {
        cin >> happiness[i];
    }
    
    sort(happiness, happiness + n, greater<long long>()); // Sort in descending order
    
    long long largest_happiness = happiness[0];
    long long second_largest_happiness = happiness[1];
    
    long long maxhappiness = 0;
    
    if (k >= m) {
        maxhappiness = largest_happiness * m;
    } else {
        long long full_cycles = m / (k + 1);
        long long remainder = m % (k + 1);
        
        maxhappiness = full_cycles * (k * largest_happiness + second_largest_happiness);
        maxhappiness += remainder * largest_happiness;
    }
    
    cout << maxhappiness << endl;
    return 0;
}