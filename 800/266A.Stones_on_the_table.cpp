/* problem link : https://codeforces.com/problemset/problem/266/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  string colors;
  cin>>n>>colors;
  int count = 0;

  for(int i = 1; i < n; i++){
    if(colors[i] == colors[i-1]){
      count++;
    }
  }
  cout<<count<<'\n';
  return 0;
}