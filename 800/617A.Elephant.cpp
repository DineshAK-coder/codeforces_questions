/* problem link: https://codeforces.com/problemset/problem/617/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios:: sync_with_stdio(false);
  cin.tie(NULL);

  int distance;
  cin>>distance;
  int dividend = 5;
  int steps = 0;
  while(distance != 0){
    steps += distance/ dividend;
    distance %= dividend;
    dividend --;
  }
  cout<<steps<<'\n';
  return 0;
}