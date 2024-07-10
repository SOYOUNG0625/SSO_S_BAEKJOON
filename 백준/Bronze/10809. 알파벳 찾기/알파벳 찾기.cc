#include<iostream>
#include<vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> alph(26, -1); 
    int i = 0;
    while (s[i] != '\0') {
        if (alph[s[i] - 'a'] == -1) {
            alph[s[i] - 'a'] = i;
        }
        i++;
    }
    for (int j = 0; j < 26; j++) {
        cout << alph[j] << " ";
    }
    cout << endl;
    return 0;
}