/* problem link : https://codeforces.com/problemset/problem/41/A */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string current,check;
  cin>>current>>check;
  reverse(current.begin(), current.end());
  if(current == check){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}
