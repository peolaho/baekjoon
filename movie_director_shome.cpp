#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string tmp;
    char letter6 = '6';
    int end_count = 0, result;

    for (int i = 666; end_count != N; i++) {

        tmp = (to_string(i));

        for(int j = 0; j < (tmp.length() - 2); j++){
            if (tmp[j] == letter6 and tmp[j + 1] == letter6 and tmp[j + 2] == letter6) {
                result = i;
                end_count++;
                break;
            }
        }
	}
    cout << result << endl;
}