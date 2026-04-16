/*"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.*/

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  vector <int> arr;
  int n,k,threshold,count;
  count = 0;
  cin>>n>>k;
  for(int i = 0; i<n; i++){
    int a;
    if(i == k-1){
      cin>>threshold;
      arr.push_back(threshold);
    }
    else{
      cin>>a;
      arr.push_back(a);
    }
  }
  for(int k:arr){
    if(k >= threshold && k > 0){
      count++;
    }
  }
  cout<<count<<'\n';
  return 0;
}