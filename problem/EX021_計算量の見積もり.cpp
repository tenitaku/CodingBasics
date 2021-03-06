#include <bits/stdc++.h>
using namespace std;

int f0(int N) {
  return 1;
}
//O(1)

int f1(int N, int M) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    s++;
  }
  for (int i = 0; i < M; i++) {
    s++;
  }
  return s;
}
//O(2N)

int f2(int N) {
  int s = 0;
  for (int i = 0; i < N; i++) {
      int t = N;
      int cnt = 0;
      while (t > 0) {
        cnt++;
        t /= 2;
      }
      s += cnt;
  }
  return s;
}
//O(N*logN)


int f3(int N) {
  int s = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      s++;
    }
  }
  return s;
}
//O(1)

int f4(int N) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      s += i + j;
    }
  }
  return s;
}
//O(N^2)

int f5(int N, int M) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      s += i + j;
    }
  }
  return s;
}
//O(NM)

int main() {
  int N, M;
  cin >> N >> M;

  int a0 = -1, a1 = -1, a2 = -1, a3 = -1, a4 = -1, a5 = -1;

  // 計算量が最も大きいもの1つだけコメントアウトする
  a0 = f0(N);//O(1)
  a1 = f1(N, M);//O(2N)
  a2 = f2(N);//O(NlogN)
  a3 = f3(N);//O(1)
  //a4 = f4(N);//O(N^2)
  a5 = f5(N, M);//O(NM)

  cout << "f0: " << a0 << endl;
  cout << "f1: " << a1 << endl;
  cout << "f2: " << a2 << endl;
  cout << "f3: " << a3 << endl;
  cout << "f4: " << a4 << endl;
  cout << "f5: " << a5 << endl;
}


/*
 計算量の大まかな大小関係
 O(1)<O(logN)<O(N)<O(NlogN)<O(N^2)<O(2^N)
 */
