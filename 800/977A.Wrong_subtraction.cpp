/* problem link : https://codeforces.com/problemset/problem/977/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int num,k;
  cin>>num>>k;
  while(k>0){
    int sub = min(k,num % 10);
    if (sub == 0){
      num /= 10;
      k--;
    }
    else{
      num -= sub;
      k-=sub;
    }
  }
  cout<<num<<endl;
}