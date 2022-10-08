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
//https://qiita.com/javacurrys/items/04a49674191acf74675e#%E5%AE%9F%E3%81%AF%E7%B0%A1%E5%8D%98%E3%81%A0%E3%81%A3%E3%81%9Ffor%E6%96%87%E3%81%AE%E3%83%8D%E3%82%B9%E3%83%88
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

