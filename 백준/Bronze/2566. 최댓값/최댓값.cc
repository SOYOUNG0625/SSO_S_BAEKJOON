#include<iostream>
#include<vector>

using namespace std;
int main() {
    int a[9][9], max = 0, r, c;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> a[i][j];
            if (a[i][j] >= max) {
                max = a[i][j];
                r = i;
                c = j;
            }
        }
    }
    cout << max << endl;
    cout << r + 1 << " " << c + 1 << endl;
    return 0;
}