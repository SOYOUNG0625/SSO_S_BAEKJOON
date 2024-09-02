#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<string> words(5);
    int maxLength = 0;

    for (int i = 0; i < 5; i++) {
        cin >> words[i];
        if (words[i].length() > maxLength) {
            maxLength = words[i].length();
        }
    }
    for (int i = 0; i < maxLength; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < words[j].length()) {
                cout << words[j][i];
            }
        }
    }
    return 0;
}
