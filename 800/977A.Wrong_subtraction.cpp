/* problem link : https://codeforces.com/problemset/problem/977/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false); 
  cin.tie(NULL);

  int num,k;
  cin>>num>>k;
  for(k; k>0; k--){
    if(num % 10 == 0){
      num /= 10;
    }
    else{
      num--;
    }
  }
  cout<<num<<'\n';
  return 0;
}