#include <iostream>
#include <sys/resource.h>
using namespace std;

void printCircularArray(string s, int ind) {
  for (int i = ind; i < s.length() + ind; i++) {
    // 0 based indexing hence ind+1
    cout << s[i % s.length()] << "\n";
  }
}
