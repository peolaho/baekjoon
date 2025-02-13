#include <iostream>
#include <string>
using namespace std;

int main(){
    string A, B, C;

    cin >> A;
    cin >> B;
    cin >> C;

    int int_result;
    int str_result;

    int_result = (stoi(A) + stoi(B) - stoi(C));

    str_result = (stoi(A + B) - stoi(C));

    cout << int_result << "\n" << str_result << endl;

    return 0;
}