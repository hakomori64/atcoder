#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double k;
        string s;
        cin >> k >> s;
        if (s == "JPY") {
            sum += k;
        } else {
            sum += k * 380000;
        }
    }
    printf("%.6lf\n", sum);
    return 0;
}
