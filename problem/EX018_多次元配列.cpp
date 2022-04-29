#include <bits/stdc++.h>
using namespace std;

int main() {
  //入力
  //N人,M試合
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
  
  //N×Nの表の作成(-)で初期化
  vector<vector<char>> table(N, vector<char>(N, '-'));
  //M試合分の丸バツを付けていく
  for (int i = 0; i < M; i++) {
    A.at(i)--;
    B.at(i)--;
    table.at(A.at(i)).at(B.at(i)) = 'o';
    table.at(B.at(i)).at(A.at(i)) = 'x';
  }
  
  //出力:行ごとに順に。行の最後(j==N-1)なら改行。それ以外は半角空白。
  for (int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      cout << table.at(i).at(j);
      if (j == N - 1) cout << endl;
      else cout << " ";
    }
  }
}

/*
 だんだん難しくなってきた。
 ＜ポイント＞
 ・AとBの１次元配列に格納された値は、ビジュアル的に分かりやすいように第1行1列から始まるA_ijのi,jとなっているが、
 二次元配列に格納する時には0行0列となるため、-1しなければならない。つまずきやすい。
 */
