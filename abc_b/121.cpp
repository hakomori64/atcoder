#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> bs(m);
    for (int i = 0; i < m; i++) {
        cin >> bs.at(i);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            int num;
            cin >> num;
            sum += num * bs.at(j);
        }
        if (sum + c > 0) count++;
    }
    cout << count << endl;
    return 0;
}
