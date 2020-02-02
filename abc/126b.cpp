#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;
    cin >> s;
    string former = s.substr(0, 2);
    string latter = s.substr(2, 2);
    
    int i_former = stoi(former);
    int i_latter = stoi(latter);

    bool yymm = false;
    bool mmyy = false;

    if (0 < i_latter && i_latter <= 12) yymm = true;
    if (0 < i_former && i_former <= 12) mmyy = true;

    if (yymm && mmyy) {
        cout << "AMBIGUOUS" << endl;
    } else if (yymm) {
        cout << "YYMM" << endl;
    } else if (mmyy) {
        cout << "MMYY" << endl;
    } else {
        cout << "NA" << endl;
    }
    return 0;
}
