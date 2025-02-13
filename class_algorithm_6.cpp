#include <iostream>
using namespace std;

int main(){
    long int n;
    cin >> n;

// i = 1 to n - 2
// j = i to n - 2
// k = j to n - 1

    cout << (n - 2) * (n - 1) * n / 6 << endl;
    cout << 3 << endl;
    return 0;
}