/* problem link : https://codeforces.com/problemset/problem/677/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n,h,x,length = 0;
  cin>>n>>h;
  for (int i = 0; i < n ; i++){
    cin>>x;
    if(x > h){
      length += 2;
    }
    else{
      length++;
    }
  }
  cout<<length<<endl;
  return 0;
}