/* problem link : https://codeforces.com/problemset/problem/734/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n,count = 0;
  string problem, result;
  cin>>n>>problem;
  for(char k: problem){
    if(k == 'D'){
      count ++;
    }
    else{
      count--;
    }
  }
  if(count > 0){
    cout<<"Danik";
  }
  else if(count < 0){
    cout<<"Anton";
  }
  else{
    cout<<"Friendship";
  }
}