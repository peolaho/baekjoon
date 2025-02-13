#include <iostream>
#include <cmath> 

int main(){
    int N;
    std::cin >> N;
    
    if (N == 1){
        return 0;
    }

    int last_soinsu = 1;
    while ((N / last_soinsu) != 1){
        for (int i = 2; i <= N; i++){
            if (N == i){
                last_soinsu = N;
                break;
            }
            else if (not (bool)(N % i)){
                std::cout << i << "\n";
                last_soinsu = i;
                N /= i;
                break;
            }
            continue;
        }
    }
    std::cout << N << std::endl;

    return 0;
}