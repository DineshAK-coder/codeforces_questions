/* proble link : https://codeforces.com/problemset/problem/546/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int k,n,w,amount = 0, result;
  cin>>k>>n>>w;
  amount = ((w*(w+1))/2) * k;
  result = amount - n;
  cout<<max(result,0)<<endl;
  return 0;
}