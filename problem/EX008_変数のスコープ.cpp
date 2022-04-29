#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int pattern;
  cin >> pattern;
  
  if (pattern == 2) {
    string text;
    cin >> text;
    cout << text + "!" << endl;
  }
  
  int price, N;
  cin >> price >> N;
  cout << price * N << endl;
}

/*
 patternによって場合分け同じところは極力まとめる
 今回だと、パターンによって出力が違うが、
 1行目以外は同じなのでまとめることができる。
 */
