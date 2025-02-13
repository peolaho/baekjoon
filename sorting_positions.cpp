#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<pair<int, int>> x_y_es;
    int x, y;
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        x_y_es.push_back(make_pair(x, y));
    }

    sort(x_y_es.begin(), x_y_es.end());

    for (pair<int, int> x : x_y_es) {
        cout << x.first << " " << x.second << "\n";
    }

    return 0;
}