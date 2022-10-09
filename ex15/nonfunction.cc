#include <bits/stdc++.h>
using namespace std;


int main() {
  int N;
  cin >> N;

 vector<int> scores_A(N);
 vector<int> scores_B(N);
 vector<int> scores_C(N);

  for(int i=0; i<N; i++){
    cin >> scores_A.at(i);
  }
  for(int i=0; i<N; i++){
    cin >> scores_B.at(i);
  }
  for(int i=0; i<N; i++){
    cin >> scores_C.at(i);
  }
  //3人の配列が完成
  //合計を求めていく
  int sum_A = 0;
  int sum_B = 0;
  int sum_C = 0;
  for(int i=0; i<N; i++){
    sum_A += scores_A.at(i);
  }
  for(int i=0; i<N; i++){
    sum_B += scores_B.at(i);
  }
  for(int i=0; i<N; i++){
    sum_C += scores_C.at(i);
  }

  cout << sum_A * sum_B * sum_C <<endl;
}

