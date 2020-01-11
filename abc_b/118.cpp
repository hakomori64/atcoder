#include <iostream>
#include <vector>
#include <string>
#include <boost/algorithm/string.hpp>
#include <boost/foreach.hpp>
#include <boost/range/algorithm/count.hpp>
using namespace std;



int main() {
    int n, m;
    cin >> n >> m;
    vector<int> kinds(m);
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        for (int j = 0; j < num; j++) {
            int k;
            cin >> k;
            kinds.at(k-1)++;
        }
    }


    cout << boost::count(kinds, n) << endl;
    return 0;
}
