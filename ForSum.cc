#include <bits/stdc++.h>
using namespace std;

int main() {
  //人数
  int N;
  cin >> N;

  //数学,英語の点数
  vector<int> math(N);
  vector<int> en(N);
  int sum_math=0;
  int sum_en=0;

  for(int i=0; i<N; i++){
    cin >> math.at(i);
  }
  for(int i=0; i<N; i++){
    cin >> en.at(i);
  }
  for(int i=0; i<N; i++){
    cout << en.at(i) + math.at(i) <<endl;
  }




}
