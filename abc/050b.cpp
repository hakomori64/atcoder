#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> time_to_take(n);
    for (int i = 0; i < n; i++) {
        cin >> time_to_take.at(i);
    }

    long sum = accumulate(time_to_take.begin(), time_to_take.end(), 0);
    int m;
    cin >> m;
    vector<int> kinds(m);
    vector<int> times(m);

    for (int i = 0; i < m; i++) {
        cin >> kinds.at(i);
        cin >> times.at(i);
    }

    for (int i = 0; i < m; i++) {
        int kind, time;
        kind = kinds.at(i);
        time = times.at(i);
        cout << sum - time_to_take.at(kind - 1) + time << endl;
    }
    return 0;
}
