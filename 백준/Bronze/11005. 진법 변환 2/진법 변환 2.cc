#include<iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, B, i=0;
    vector<char> result;
    cin >> N >> B;
    do {
        int remainder = N % B;
        if (remainder >= 10) {
            result.push_back(static_cast<char>(remainder - 10 + 'A'));
        }
        else {
            result.push_back(static_cast<char>(remainder + '0'));
        }
        N /= B;
    } while (N > 0);

    // 결과를 역순으로 출력
    for (auto it = result.rbegin(); it != result.rend(); ++it) {
        cout << *it;
    }
    cout << endl;
    return 0;
}
