#include <iostream>
#include <vector>
using namespace std;

int max_size = 1000000;
vector<int> vec(max_size);


int main() {
    int n;
    cin >> n;
    vec.at(0) = 0;
    vec.at(1) = 0;
    vec.at(2) = 1;

    for (int i = 3; i < n; i++) {
        vec.at(i) = (vec.at(i-1) + vec.at(i-2) + vec.at(i-3)) % 10007;
    }
    cout << vec.at(n-1) << endl;
}
