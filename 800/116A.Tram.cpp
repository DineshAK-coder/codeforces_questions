/* problem link : https://codeforces.com/problemset/problem/116/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, passengers = 0, result = 0;
  cin>>n;
  while(n--){
    int a,b;
    cin>>a>>b;
    passengers -= a;
    passengers += b;
    result = max(passengers,result);
  }
  cout<<result<<endl;
}