/* problem link : https://codeforces.com/problemset/problem/59/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string word;
  cin>>word;
  int ucount = 0, lcount = 0;
  for(char k: word){
    if(isupper(k)){
      ucount++;
    }
    else{
      lcount++;
    }
  }
  if(lcount > ucount || lcount == ucount){
    transform(word.begin(), word.end(), word.begin(), :: tolower);
    cout<<word<<endl;
  }
  else{
    transform(word.begin(),word.end(),word.begin(),::toupper);
    cout<<word<<endl;
  }
  return 0;
}