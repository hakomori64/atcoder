#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double calc_distance(vector<int> vec1, vector<int> vec2) {
    double sum = 0;
    for (int i = 0; i < vec1.size(); i++) {
        sum += (vec1.at(i) - vec2.at(i)) * (vec1.at(i) - vec2.at(i));    
    }
    return sqrt(sum);
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<vector<int>> vec(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            int num;
            cin >> num;
            vec.at(i).push_back(num);
        }
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double distance = calc_distance(vec.at(i), vec.at(j));
            if (ceil(distance) == floor(distance)) count++;
        }
    }

    cout << count << endl;


    return 0;
}
