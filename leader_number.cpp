#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers;

    int tmp;

    for (int i = 0; i < 5 ; i++) {
        cin >> tmp;
        numbers.push_back(tmp);
    }

    sort(numbers.begin(), numbers.end());

    int sum = 0, length = 0;

    for (auto i = numbers.begin(); i != numbers.end(); i++) {
        sum += *i;
        length++;
    }

    cout << sum / 5 << endl;
    cout << numbers[2] << endl;

    return 0;
}