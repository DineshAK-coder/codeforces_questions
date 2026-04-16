/*"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.*/

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n,k;
  cin>>n>>k;
  vector<int> arr(n);

  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  int threshold = arr[k-1];
  int count = 0;

  for(int k:arr){
    if(k >= threshold && k > 0){
      count ++;
    }
  }
  cout<<count<<'\n';
  return 0;
}