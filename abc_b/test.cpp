#include <iostream>
using namespace std;


int main() {
    string test = "hello";
    test.erase(test.begin());
    cout << test << endl;
    cout << test.size() << endl;
    return 0;
}
