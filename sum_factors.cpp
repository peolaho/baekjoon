#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

int main(void)
{
    int N;
    while (N != -1){
        std::vector<int> solution;
        
        int sum = 0;
        std::cin >> N;

        if (N == -1){
            break;
        }

        for (int i = 1; i <= sqrt(N); i++)
            if (N % i == 0)
            {
                solution.push_back(i); sum += i;
                if (i != N / i) {solution.push_back(N / i); sum += (N / i);};
            }
        std::sort(solution.begin(), solution.end());
        sum -= N;
        if (sum == N){
            std::cout << N << " = ";
            for (auto a = solution.begin(); a != solution.end(); a++){
                if (a == solution.begin()){
                    std::cout << *a;
                }
                else if (a == solution.end() - 1){

                }
                else{
                    std::cout << " + " << *a;
                }
            }
        }
        else {
            std::cout << N << " is NOT perfect.";
        }
            

        std::cout << std::endl;
    }
    return 0;
}