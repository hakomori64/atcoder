#include <iostream>
using namespace std;

int main() {
   int a, b;
   cin >> a >> b;
   cout << (a - 2 * b > 0 ? a - 2 * b : 0) << endl;
   return 0;
}
