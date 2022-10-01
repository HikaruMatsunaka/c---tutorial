#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  string option;
  cin >> a >> option >> b;

  if(option == "+"){
    cout << a + b << endl;
  }
  else if(option == "-"){
    cout << a - b << endl;
  }
  else if(option == "*"){
    cout << a * b << endl;
  }
  else if(option == "/"){
    if(b!=0){
    cout << a / b << endl;
    }else{
    cout << "0では割れません。" << endl;
    }
  }
  else if(option == "%"){
    if(b!=0){
    cout << a / b << endl;
    }else{
    cout << "0では割れません。" << endl;
    }
  }
}
