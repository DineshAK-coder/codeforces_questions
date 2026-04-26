/* problem link : https://codeforces.com/problemset/problem/266/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n,count = 0;
  char previous = ' ',current;
  cin>>n;
  while(n--){
    cin>>current;
    if(current == previous){
      count++;
    }
    previous = current;
  }
  cout<<count<<endl;
  return 0;
}