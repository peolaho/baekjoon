#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int cards[N];
    for (int i = 0; i < N; i++){
        cin >> cards[i];
    }

    int result = cards[0] + cards[1] + cards[2];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            for (int k = 0; k < N; k++){
                if ((abs(M - result) >= abs(M - (cards[i] + cards[j] + cards[k]))) and (i != j and j != k and i != k) and (M >= (cards[i] + cards[j] + cards[k]))) 
                {
                    result = (cards[i] + cards[j] + cards[k]);
                }
            }
        }
    }

    cout << result << endl;

    return 0;
}