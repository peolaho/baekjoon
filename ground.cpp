#include <iostream>
#include <algorithm>

int main() {
    int N;

    std::cin >> N;
    int X[N];
    int Y[N];

    for (int i = 0; i < N; i++){
        std::cin >> X[i] >> Y[i];
    }

    int minX = *std::min_element(X, X + N);
    int maxX = *std::max_element(X, X + N);

    int minY = *std::min_element(Y, Y + N);
    int maxY = *std::max_element(Y, Y + N);

    std::cout << (maxX - minX) * (maxY - minY) << std::endl;

    return 0;
}