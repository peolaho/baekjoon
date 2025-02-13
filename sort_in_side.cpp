#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    string tmp;
    cin >> tmp;

    int string_length = tmp.length();

    char list[string_length];
    strcpy(list, tmp.c_str());

    int result[string_length] = { 0 };
    for (int i = 0; i < string_length; i++){
        result[i] = (int)(list[i]) - 48;
    }

    sort(result, result + string_length, greater<int>());

    for (int i = 0; i < string_length; i++) {
        cout << result[i];
    }

    cout << endl;

    return 0;
}