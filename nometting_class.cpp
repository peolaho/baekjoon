#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, C, D, E, F, X = -1000, Y = -1000;
    cin >> A >> B >> C >> D >> E >> F;

    for (int x = -999; x < 1000; x++){
        for (int y = -999; y < 1000; y++){
            if (A * x + B * y == C and \
                D * x + E * y == F){
                    X = x;
                    Y = y;
                    break;
            }
        }
        if (X != -1000 and Y != -1000){ break; }
    }

    cout << X << " " << Y << endl;


    return 0;
}