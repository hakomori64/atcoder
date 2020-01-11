#include <iostream>
#include <vector>
#include <boost/range/numeric.hpp>
#include <boost/range/algorithm/max_element.hpp>
#include <boost/range/irange.hpp>
#include <boost/foreach.hpp>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i : boost::irange(0, n, 1)) {
        cin >> vec.at(i);
    }

    long sum = boost::accumulate(vec, 0);
    int max_num = *(boost::max_element(vec));
    if (max_num < sum - max_num) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;

}
