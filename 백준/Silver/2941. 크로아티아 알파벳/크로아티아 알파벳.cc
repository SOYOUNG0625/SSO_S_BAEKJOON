#include<iostream>
#include<string>
using namespace std;
int main() {
    string s, cro[] = { "c=", "c-" , "d-" , "lj", "nj", "s=", "z=" };
    cin >> s;
    int len = s.length(), num = len;
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < 8; j++) {
            if (s.substr(i, 2) == cro[j]) {
                num--;
            }
        }
        if (s.substr(i, 3) == "dz=") {
            num--;
        }
    }
    cout << num << endl;
    return 0;
}