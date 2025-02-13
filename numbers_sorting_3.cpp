#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    long int N;
    cin >> N;
    
    int B[10000] = { 0 };

    int tmp;
    for (int i = 0; i < N ; i++) {
        cin >> tmp;
        B[tmp - 1]++;
    }
 
    for (int i = 0; i < 10000; i++)
		for (int j = 0; j < B[i]; j++)
			cout << to_string(i + 1) + '\n';

    return 0;
}