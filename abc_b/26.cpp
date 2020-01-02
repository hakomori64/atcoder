#define _USE_MATH_DEFINES
#include <math.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    double area = 0;
    for (int i = 0; i < n; i++) {
        area += vec.at(i) * vec.at(i) * M_PI * (i % 2 == 0 ? 1 : -1);
    }
    printf("%.6lf\n", area);
    return 0;
}
