#include <iostream>

using namespace std;
char WB[8][9] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
char BW[8][9] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

char board[50][50];
int count_wrong_columns(int x, int y)
{
    int WB_counting = 0;
    int BW_counting = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[x + i][y + j] != WB[i][j]) {
                WB_counting++;
            }
            if (board[x + i][y + j] != BW[i][j]) {
                BW_counting++;
            }
        }
    }
    return min(BW_counting, WB_counting);
}
int main() {
    int N, M;
    cin >> N >> M;

    int result = (N * M) + 1;

    for (int i = 0; i < N; i++){
        cin >> board[i];
    }

    int tmp;

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            tmp = count_wrong_columns(i, j);

            if (tmp < result) {
                result = tmp;
            }
        }
    }
    cout << result << endl;
    return 0;
}