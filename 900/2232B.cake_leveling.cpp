/*problem link : https://codeforces.com/problemset/problem/2232/B*/

#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int testcases;
  cin>>testcases;
  vector<vector<long long>> testcaseArr;
  for(int testcase = 0; testcase < testcases; testcase++){
    vector<long long> mainArr;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
      long long x;
      cin>>x;
      if(i == 0){
        mainArr.push_back(x);
        continue;
      }
      mainArr.push_back(x + mainArr[i - 1]);
    }
    testcaseArr.push_back(mainArr);
  }
  for(auto k : testcaseArr){
    int temp, min;
    for(int j = 0; j < k.size(); j++){
      if(j==0){
        cout<<k[0];
        min = k[0];
        continue;
      }
      temp = k[j]/(j+1);
      if(temp < min){
        min = temp;
      }
      cout<<' '<<min;
    }
    cout<<"\n";
  }
}