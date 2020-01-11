#include <iostream>
#include <boost/range/irange.hpp>
#include <boost/range/numeric.hpp>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i : boost::irange(0, n, 1)) {
        cin >> vec.at(i);
    } 
    sort(vec.begin(), vec.end());
    int sum = boost::accumulate(vec, 0);
    cout << sum - (vec.at(vec.size()-1) / 2) << endl;
    return 0;

}
