#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long int N;
    cin >> N;

    vector<long int> positions;
    long int position;
    for (int i = 0; i < N; i++) {
        cin >> position;
        positions.push_back(position);
    }
    std::set<int> no_dupl( positions.begin(), positions.end() ); 

    vector<long int> unique_positions;
    unique_positions.assign( no_dupl.begin(), no_dupl.end() );
    sort(unique_positions.begin(), unique_positions.end());

    for (long int i : positions) {
        cout << to_string(lower_bound(unique_positions.begin(), unique_positions.end(), i) - unique_positions.begin()) + ' ';
    } 
    cout << endl;
    return 0;
}