#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

int main() {
    int N, K;

    std::cin >> N >> K;
    std::vector<int> factors;

    for (int i = 1;i - 1 < ceil(N / 2);i++){
        if (N % i == 0){
            factors.push_back(i);
        }
    }
    factors.push_back(N);
    std::sort(factors.begin(), factors.end());
    if (K <= factors.size()){
        std::cout << factors[K - 1] << std::endl;
    }
    else{
        std::cout << 0 << std::endl;
    }

    return 0;
}