/* problem link : https://codeforces.com/problemset/problem/734/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  string problem;
  cin>>n>>problem;
  int a_count = 0, d_count = 0;
  for(int k: problem){
    if(k == 'A'){
      a_count ++;
    }
    else{
      d_count ++;
    }
  }
  string result;
  if(a_count == d_count){
    result = "Friendship";
  }
  else if(a_count > d_count){
    result = "Anton";
  }
  else{
    result = "Danik";
  }
  cout<<result<<endl;
  return 0;
}