/* problem link : https://codeforces.com/problemset/problem/110/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int count = 0;
  long long num;
  bool status = false;
  cin>>num;
  while(num != 0){
    int x = num % 10;
    num /= 10;
    if(x == 7 | x == 4){
      status = true;
      count++;
    }
  }
  string result = (status & (count  == 4 | count  == 7   )) ? "YES" : "NO";
  cout<<result<<endl;
  return 0;
}