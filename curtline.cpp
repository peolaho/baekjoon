#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N, k;
    cin >> N >> k;

    vector<int> numbers;

    int tmp;
    for (int i = 0; i < N ; i++) {
        cin >> tmp;
        numbers.push_back(tmp);
    }

    sort(numbers.begin(), numbers.end(), greater<int>());

    cout << numbers[k - 1] << endl;

    return 0;
}