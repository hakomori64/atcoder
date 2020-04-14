#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
  // このコードは標準入力と標準出力を用いたサンプルコードです。
  // このコードは好きなように編集・削除してもらって構いません。
  // ---
  // This is a sample code to use stdin and stdout.
  // Edit and remove this code as you like.

  string num;
  cin >> num;
  sort(num.begin(), num.end());
  if (num[0] == '0') {
    for (int i = 1; i < num.size(); i++) {
      if (num[i] != '0') {
        cout << num[i];
        num.erase(num.begin() + i);
        break;
      }
    }
  }
  cout << num << endl;
  return 0;
}
