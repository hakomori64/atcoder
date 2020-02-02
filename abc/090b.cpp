#include <iostream>
#include <string>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; i++) {
        string num = to_string(i);
        bool flag = true;
        for (int j = 0; j < num.size() / 2; j++) {
            if (num.at(j) != num.at(num.size()-j-1)) flag = false;
        }

        if (flag) count++;
    }
    cout << count << endl;
    return 0;
}
