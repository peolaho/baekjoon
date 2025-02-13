#include <iostream>
#include <cmath>

int main(){
    long int A, B, V;
    std::cin >> A >> B >> V;

    if (A == V){
        std::cout << 1 << std::endl;
        return 0;
    }

    long int day = 0;

    day += floor((V - B) / (A - B));
    day += (int)((V - B) % (A - B) > 0);

    std::cout << day << std::endl;

    return 0;
}