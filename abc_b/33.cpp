#include <iostream>
#include <numeric>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<string> vec_name;
    vector<int> vec_population;
    for (int i = 0; i < n; i++) {
        string name;
        int population;
        cin >> name >> population;
        vec_name.push_back(name);
        vec_population.push_back(population);
    }

    double sum_population = accumulate(vec_population.begin(), vec_population.end(), 0);

    for (int i = 0; i < n; i++) {
        if (vec_population.at(i) / sum_population > 0.5) {
            cout << vec_name.at(i) << endl;
            return 0;
        }
    }
    cout << "atcoder" << endl;
    return 0;
}
