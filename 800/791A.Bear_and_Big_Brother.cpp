/* problem link : https://codeforces.com/problemset/problem/791/A  */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int limak,bob;
  cin>>limak>>bob;
  int counter = 0;

  while(limak<=bob){
    limak *= 3;
    bob *= 2;
    counter++;
  }
  cout<<counter<<'\n';
  return 0;
}