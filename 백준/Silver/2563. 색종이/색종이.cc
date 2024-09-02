#include<iostream>

using namespace std;

int main() {
    int white[100][100] = { 0 }, num, x, y, black=0;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> x >> y;
        for (int j = x; j < x + 10; j++) {
            for (int k = y; k < y + 10; k++) {
                white[j][k] = 1;
            }
        }
    }
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (white[i][j] == 1) {
                black++;
            }
        }
    }
    cout << black << endl;
    return 0;
}
