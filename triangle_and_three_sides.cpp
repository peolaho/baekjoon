#include <iostream>
#include <algorithm>

int main() {
    int side_1st, side_2rd, side_3th;
    int max_side, min_side;

    while (true){
        std::cin >> side_1st;
        std::cin >> side_2rd;
        std::cin >> side_3th; 

        if (side_1st == 0 and side_2rd == 0 and side_3th == 0){return 0;}
        

        max_side = std::max(std::max(side_1st, side_2rd), side_3th);

        if (max_side >= side_1st + side_2rd + side_3th - max_side){
            std::cout << "Invalid" << std::endl;
        }

        else if ((side_1st == side_2rd) and (side_2rd == side_3th) and (side_1st == side_3th)) {
            std::cout << "Equilateral" << std::endl;
        }

        else if ((side_1st == side_2rd) or (side_1st == side_3th) or (side_2rd == side_3th)) {
            std::cout << "Isosceles" << std::endl;
        }

        else if ((side_1st != side_2rd) and (side_1st != side_3th) and (side_2rd != side_3th)) {
            std::cout << "Scalene" << std::endl;
        }   
    }
    
    return 0;
}