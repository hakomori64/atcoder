#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> vec_a(n);
    vector<int> vec_b(n);
    vector<int> vec_c(n-1);
    for (int i = 0; i < n; i++) {
        cin >> vec_a.at(i);
    }

    for (int i = 0; i < n; i++) {
        cin >> vec_b.at(i);
    }

    for (int i = 0; i < n - 1; i++) {
        cin >> vec_c.at(i);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int current_sum = 0;
        current_sum += vec_b.at(vec_a.at(i)-1);
        if (i > 0 && vec_a.at(i) == vec_a.at(i-1) + 1) {
            current_sum += vec_c.at(vec_a.at(i-1)-1);
        }
        sum += current_sum;
    }

    cout << sum << endl;
    return 0;
}
