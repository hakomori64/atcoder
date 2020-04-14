#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  // このコードは標準入力と標準出力を用いたサンプルコードです。
  // このコードは好きなように編集・削除してもらって構いません。
  // ---
  // This is a sample code to use stdin and stdout.
  // Edit and remove this code as you like.

  map<int, string> mp;
  int m;
  string token;
  cin.tie(0);
  ios::sync_with_stdio(false);
  while (cin >> token) {
    auto idx = find(token.begin(), token.end(), ':');
    if (idx != token.end()) {
      // find num-word pair
      int num = stoi(string(token.begin(), token.begin() + (idx - token.begin())));
      string word = string(token.begin() + (idx - token.begin() + 1), token.end());
      //cout << "num & word " << num << word << endl;
      mp[num] = word;
    } else {
      // token is m
      m = stoi(token);
      //cout << m << endl;
    }
  }

  string str = "";
  for (auto it : mp) {
    if (m % it.first == 0) str += it.second;
  }

  if (str == "") {
    cout << m << endl;
  } else {
    cout << str << endl;
  }

  return 0;
}
