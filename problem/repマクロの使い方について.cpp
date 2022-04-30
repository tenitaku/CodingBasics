/*
 --repマクロの使い方--
 --3回繰り返すとき--
 #define rep(i, n) for (int i = 0; i < (int)(n); i++)
  
 int main() {
   rep(i, 3) {
     cout << "Hello rep: " << i << endl;
   }
 }
 --結果--
 Hello rep: 0
 Hello rep: 1
 Hello rep: 2
 breakでループから抜け、continueで後の処理を無視して次のループへ進める。
 
 --派生した例-- sからn-1までの処理を行いたいとき
 #define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
  
 int main() {
   rep2(i, 2, 5) {
     cout << "Hello rep2: " << i << endl;
   }
 }
 --結果--
 Hello rep2: 2
 Hello rep2: 3
 Hello rep2: 4
 
 */

/*
 
 */
