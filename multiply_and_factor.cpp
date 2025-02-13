# include <iostream>

int main() {
    int A = 1, B = 1;

    while (true){
        std::cin >> A >> B;

        if (A == 0 and B == 0){
            return 0;
        }
        else if (B % A == 0){
            std::cout << "factor" << std::endl;
        }
        else if(A % B == 0){
            std::cout << "multiple" << std::endl;
        }
        else {
            std::cout << "neither" << std::endl;
        }
    }
}