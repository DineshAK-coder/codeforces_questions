/* problem link : https://codeforces.com/problemset/problem/271/A  */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int year;
  cin>>year;
  bool status = false;
  while(status == false){
    year++;
    int temp = year, length = 0;
    set <int> unique_arr;
    while(temp > 0){
      unique_arr.insert(temp%10);
      length++;
      temp /= 10;
    }
    if(unique_arr.size() == length){
      status = true;
    }
    else{
      continue;
    }
  }
  cout<<year<<endl;
}