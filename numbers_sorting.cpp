#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> numbers;

    int tmp;
    for (int i = 0; i < N ; i++) {
        cin >> tmp;
        numbers.push_back(tmp);
    }

    sort(numbers.begin(), numbers.end());

    for (auto i = numbers.begin(); i != numbers.end(); i++) {
        cout << *i << endl;
    }

    return 0;
}