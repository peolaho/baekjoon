#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool word_sort(string a, string b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }

    return a < b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<string> words;
    string word;
    for (int i = 0; i < N; i++) {
        cin >> word;
        words.push_back(word);
    }

    sort(words.begin(), words.end(), word_sort);
    words.erase(unique(words.begin(), words.end()), words.end());

    for (string x : words) {
        cout << x + "\n";
    }

    return 0;
}