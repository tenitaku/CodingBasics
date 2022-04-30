#include <bits/stdc++.h>
using namespace std;
 
int main() {
  //入力
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  
  map<int, int> cnt;
  
  for (int x : A) {
    if (cnt.count(x)) cnt[x]++;
    else cnt[x] = 1;
  }
  
  int max_cnt = 0;
  int max_cnt_num = 0;
  for (int x : A) {
    if (max_cnt < cnt[x]) {
      max_cnt = cnt[x];
      max_cnt_num = x;
    }
  }
  //出力
  cout << max_cnt_num << " " << max_cnt << endl;
}

/*
 mapの中の最大出現回数を求める際には、現時点での最大回数の変数と、その時の数字を保存する変数、2つを用意する必要がある。
 */
