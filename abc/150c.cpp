#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> q(n);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> p.at(i);
    }

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> q.at(i);
    }

    vector<int> vec(n);
    for (int i = 1; i <= n; i++)
    {
        vec.at(i - 1) = i;
    }

    int index_p = 0;
    int index_q = 0;
    int num = 1;
    do
    {
        if (vec == p)
            index_p = num;
        if (vec == q)
            index_q = num;
        num++;
    } while (next_permutation(vec.begin(), vec.end()));
    cout << abs(index_p - index_q) << endl;

    return 0;
}
