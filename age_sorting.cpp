#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool greater1(pair<int, string> x, pair<int, string> y) {
    if   (x.first != y.first) return x.first < y.first;
    else                      return 0;
}

int main(){
    int N;
    cin >> N;

    vector< pair<int, string> > age_names;
    int age;
    string name;
    for (int i = 0; i < N; i++) {
        cin >> age >> name;
        age_names.push_back(make_pair(age, name));
    }

    stable_sort(age_names.begin(), age_names.end(), greater1);

    for (pair<int, string> x : age_names) {
        cout << x.first << " " << x.second << "\n";
    }

    return 0;
}