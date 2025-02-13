#include <iostream>

int main() {
    int angle_1st, angle_2rd, angle_3th;
    
    std::cin >> angle_1st;
    std::cin >> angle_2rd;
    std::cin >> angle_3th; 

    if ((angle_1st == 60) and (angle_2rd == 60) and (angle_3th == 60)) {
        std::cout << "Equilateral" << std::endl;
    }

    else if ((angle_1st + angle_2rd + angle_3th == 180) and ((angle_1st == angle_2rd) or (angle_1st == angle_3th) or (angle_2rd == angle_3th))) {
        std::cout << "Isosceles" << std::endl;
    }

    else if ((angle_1st + angle_2rd + angle_3th == 180) and ((angle_1st != angle_2rd) and (angle_1st != angle_3th) and (angle_2rd != angle_3th))) {
        std::cout << "Scalene" << std::endl;
    }

    else if ((angle_1st + angle_2rd + angle_3th) != 180) {
        std::cout << "Error" << std::endl;
    }
    return 0;
}