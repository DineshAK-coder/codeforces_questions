/* problem link: https://codeforces.com/problemset/problem/617/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios:: sync_with_stdio(false);
  cin.tie(NULL);

  int distance;
  cin>>distance;
  cout<<(distance+4)/5<<'\n'; //through the formula of (n+k-1)/k. we are essentially making the non divisible stuff to reach the next multiple for acheiving the ceil result.
  return 0;
}