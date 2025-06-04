#ifndef stdstringfns
#define stdstringfns
#include <string>
#include<math.h>
using namespace std;

long long rolling_polynomial_hash_prod(string const &s) {

  const int p = 31;
  const int m = 1e9 + 9;
  long long hash_value = 0;
  long long p_pow = 1;
  for (char c : s) {
    hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
    p_pow = (p_pow * p) % m;
  }
  return hash_value;
}

/// @brief 
/// @param s the string which has to be hashed.
/// @param p amount of characters being used. Pass 31 for lowercase and 52 for both upper and lowercase.
/// @return 
long long poly_hash_dev(string s,int p){
  long long sum=0;
  for(int i=0;i<s.length();i++){
    sum+=(s[i]-'a'+1)* pow(p,i);
  }
  return sum;
}

#endif
