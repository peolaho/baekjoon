#include <iostream>

int main() {
    int A, B, W, H;

    std::cin >> A >> B >> W >> H;

    std::cout << std::min(std::min(W - A, H - B), std::min(A, B)) << std::endl;

    return 0;
}