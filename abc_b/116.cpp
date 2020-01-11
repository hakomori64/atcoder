#include <iostream>
#include <vector>
#include <boost/range/algorithm.hpp>
#include <algorithm>
using namespace std;


int main() {
    int s;
    cin >> s;
    vector<int> vec;
    vec.push_back(s);
    while (true) {
        int num = vec.at(vec.size()-1);
        if (num % 2 == 0) vec.push_back(num / 2);
        else vec.push_back(3 * num + 1);
        num = vec.at(vec.size()-1);

        if (count(vec.begin(), vec.end()-1, num) > 0) {
            cout << vec.size() << endl;
            return 0;
        }
        
    
    }
}
