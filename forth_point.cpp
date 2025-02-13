#include <iostream>

int main() {
    int X_1, Y_1, X_2, Y_2, X_3, Y_3;

    std::cin >> X_1 >> Y_1;
    std::cin >> X_2 >> Y_2;
    std::cin >> X_3 >> Y_3;

    int X, Y;

    if (not ((X_1 == X_2) or (X_1 == X_3))){
        X = X_1;
    } 
    else if (not ((X_1 == X_2) or (X_2 == X_3))){
        X = X_2;
    } 
    else{
        X = X_3;
    } 

    if (not ((Y_1 == Y_2) or (Y_1 == Y_3))){
        Y = Y_1;
    } 
    else if (not ((Y_1 == Y_2) or (Y_2 == Y_3))){
        Y = Y_2;
    } 
    else{
        Y = Y_3;
    } 

    std::cout << X << " " << Y << std::endl;

    return 0;
}