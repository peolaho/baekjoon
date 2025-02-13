#include <iostream>
using namespace std;

int main(){
    int a_1, a_0, c, n_0;

    cin >> a_1 >> a_0;
    cin >> c;
    cin >> n_0;

    if (a_1 == c and a_0 <= 0) {
        cout << 1 << endl;
    }
    else if (c <= a_1) {
        cout << 0 << endl;
    }
    else if (a_1 * n_0 + a_0 <= c * n_0) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }

    return 0;
}