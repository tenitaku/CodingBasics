#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;
  
  for (int i = 0; i < N; i++) {
    string op;
    int B;
    cin >> op >> B;
    
    if (op == "+") A += B;
    else if (op == "-") A -= B;
    else if (op == "*") A *= B;
    else if (op == "/" && B != 0) A /= B;
    else {
      cout << "error" << endl;
      break;
    }
    
    cout << i+1 << ":" << A << endl;
  }
}

/*
 ポイント
 ・cinとcoutを間違えない
 ・割り算の時の数字が0の場合を忘れない
 ・for文のiはfor内でしか使えない
 ・while文のiは外でも使える（スコープの違いを理解する）
 */
