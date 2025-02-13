#include <iostream>

int main() {
    int X;
    std::cin >> X;

    int dived_mother = 1;
    int dived_son = 1;

    int i = 1;

    for (;i - 1 < X;i++){
        if (X == (i * (i + 1) / 2)){
            if (i % 2){
                std::cout << dived_son << "/" << i <<std::endl;
            }
            else {
                std::cout << i << "/" << dived_son <<std::endl;
            }
            return 0;
        }
    }
    i = 1;

    for (;i - 1 < X;i++){
        X -= i;
    }

    if (i % 2){
        dived_mother = i - (X - 1);
        dived_son = X;
    }
    else {
        dived_mother = X;
        dived_son = i - (X - 1);
    }
    
    std::cout << dived_mother << "/" << dived_son <<std::endl;
    return 0;
}