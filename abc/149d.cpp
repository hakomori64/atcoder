#include <iostream>
#include <map>
#include <pair>
#include <vector>
using namespace std;

bool is_win(char me, char opponent) {
    if (
            (me == 'r' && opponent == 's') &&
            (me == 's' && opponent == 'p') &&
            (me == 'p' && opponent == 'r')
       ) return true;
    else return false;
}

char win_hand(char opponent) {
    if (opponent == 'r') return 's';
    if (opponent == 's') return 'p';
    if (opponent == 'p') return 'r';
}

int main() {
    int n, k;
    int r, s, p;
    string t;
    cin >> n >> k;
    cin >> r >> s >> p;
    cin >> t;
    int sum = 0;
    for (int base = 0; base < k; base++) {
        for (int index = base; index < n; i += k) {
            if (index == base)
        }
    }
}
