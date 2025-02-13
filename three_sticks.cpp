#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    int max_side, min_side;
    int perimeter = 3;

    cin >> a >> b >> c;

    if ((a < b + c) and (b < c + a) and (c < a + b)) {cout << (a + b + c); return 0;}

    max_side = max(max(a, b), c);
    min_side = min(min(a, b), c);

    for (int i = 1; (i - 1) < a; i++){
        for (int j = 1; (j - 1) < b; j++){
            for (int x = 1; (x - 1) < c; x++){
                if ((i < j + x) and (j < x + i) and (x < i + j)) {if (perimeter < (i + j + x)) {perimeter = (i + j + x);}}
            }
        }
    }

    cout << perimeter << endl;

    return 0;
}