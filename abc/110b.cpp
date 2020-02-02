#include <iostream>
#include <vector>
#include <boost/range/algorithm/max_element.hpp>
#include <boost/range/algorithm/min_element.hpp>
using namespace std;


int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> xs(n);
    vector<int> ys(m);
    for (int i = 0; i < n; i++) cin >> xs.at(i);
    for (int i = 0; i < m; i++) cin >> ys.at(i);

    int max_x = *boost::max_element(xs);
    int min_y = *boost::min_element(ys);

    if (max_x < min_y && max_x < y && x < min_y) {
        cout << "No War" << endl;
    } else {
        cout << "War" << endl;
    }
    return 0;
}
