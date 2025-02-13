#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int noun = 0;

    for (int i = 0; N > 0; i++) {
        if (N % 5 == 0) {
            break;
        }
        noun++;
        N -= 3;
    }

    if (N < 0) {
        noun = -1;
    }

    noun += ceil((N / 5));

    cout << noun << endl;

    return 0;
}