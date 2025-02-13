#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int L, N, K;
    cin >> L >> N >> K;
    
    vector<int> road_lights;
    int tmp;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        road_lights.push_back(tmp);
    }

    int darkness[L] = { 0 };
    int before_distance = 0;
    int after_distance = 0;

    for (int i = 0; i < N; i++) {
        if (i == 0)    { before_distance = 0; }
        else           { before_distance = floor(after_distance / 2); }
        if (i == N - 1){ after_distance  = L; } 
        else           { after_distance  = ceil(road_lights[i + 1] - road_lights[i]); }

        cout << before_distance << " " << after_distance << endl;

        for (int j = (before_distance + road_lights[i]); j < (after_distance + road_lights[i]); j++) {
            darkness[j] = abs(road_lights[i] - j);
            cout << darkness[j] << " ";
        } 
    }

    for (int x: darkness) {cout << x;}
    

    return 0;
}