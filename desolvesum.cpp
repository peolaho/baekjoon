#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    int result = 0;
    for (int i = 1; i < N; i++){
        sum += i;
        for (int j = 0; j < to_string(i).length(); j++) {
            sum += int(to_string(i)[j]) - 48;
        }

        if (N == sum){
            result = i;
            break;
        }
        sum = 0;
    }

    cout << result << endl;

    return 0;
}