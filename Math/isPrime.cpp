#include <bits/stdc++.h>
using namespace std;
bool isPrime(int a){
  for(int i = 2; i*i <= a; i++)
    if( a % i == 0 ) return false;
  return true;
}
int main(){
  int b = 2;
  cout << isPrime(b);
  return 0;
}
