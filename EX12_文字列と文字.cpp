#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int answer = 1;
  for (int i = 1; i < s.size(); i+=2) {
    if (s.at(i) == '+') answer++;
    else answer--;
  }
  cout << answer << endl;
}

/*
 ポイント
 ・ifの比較の時、s.at(i)はchar型となるため、"+"と比較するとエラーとなる。== '+'とする。
 ・+= 1と書きがちだが、++ですむことを頭に入れる。
 */
