#include <bits/stdc++.h>
using namespace std;

int main() {
  //入力
  vector<int> a(5);
  for (int i = 0; i < 5; i++) {
    cin >> a.at(i);
  }
  
  //YESなのかNOなのか=ture or false
  bool answer = false;
  for (int i = 0; i < 4; i++) {
    if (a.at(i) == a.at(i + 1)) {
      answer = true;
    }
  }
  
  //出力
  if (answer) cout << "YES" << endl;
  else cout << "NO" << endl;
}

/*
 ポイント
 ・出力は最後にまとめた方が良い。関数の途中で何度もifによって出力するより分かりやすくなる。
 ・自分で書いたものが何をしているのか、見やすいコードを意識する。
 */
