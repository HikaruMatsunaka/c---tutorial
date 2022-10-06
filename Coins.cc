#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main(){
  int A, B, C, X;
  cin >> A >> B >> C >>X;
  int res = 0;

  for(int a=0; a<=A; ++a){
    for(int b=0; b<=B; ++b){
      for(int c=0; c<=C; ++c){
        int total = 500*a + 100*b + 50*c;
        if (total == X){++res;}
      }
    }
  }
  cout << res <<endl;
}


//for分のネストの仕組みが分かりやすい例
// #include <bits/stdc++.h>
// #define rep(i, n) for (int i = 0; i < (int)(n); i++)
// using namespace std;

// int main(){
//   int A, B, C, X;
//   cin >> A >> B >> C >>X;
//   int res = 0;

//   for(int a=0; a<=A; ++a){
//     for(int b=0; b<=B; ++b){
//       for(int c=0; c<=C; ++c){
//         cout << a << b << c << endl;
//       }
//     }
//   }
//   cout << res <<endl;
// }

