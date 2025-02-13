#include <iostream>

void isPrime3(int n,int m) {
	bool *isPrime = new bool[m+1];// n까지 구해야하므로, n+1개를 동적할당
	int min_prime = m;
    int sum = 0;
	//먼저 모든 배열을 true로 초기화
	for (int i = 0; i <= m; i++) {
		isPrime[i] = true;
	}
 
 
	for (int i = 2; i <= m; i++) {
		if (isPrime[i]) {//해당수가 소수라면, 출력하고 해당수를 제외한 배수들을 모두 제외
            for (int j = i * 2; j <= m; j += i) {
                isPrime[j] = false;
            }
            if (i >= n){
                if (min_prime >= i) {min_prime = i;}
                sum += i;
            }
            
		}
	}
    if (sum == 0){
        std::cout << -1;
        return;
    }
    std::cout << sum;
    std::cout << "\n" << min_prime;
}

int main() {
    int M, N;
    std::cin >> M;
    std::cin >> N;

    isPrime3(M, N);

    std::cout << std::endl;
    return 0;
}