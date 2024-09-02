#include<iostream>
#include <string>
using namespace std;

int main() {
    string N;
    int  B, b=1, result=0;
    cin >> N >> B;
    int len = N.length();
    for (int i = len-1; i > -1 ; i--) {
        int n=0;
        if (N[i] >= '0' && N[i] <= '9') {
            n = N[i] - '0';
        }
        else if (N[i] >= 'A' && N[i] <= 'Z') {
            n = N[i] - 'A' + 10;
        }
        result += n * b;
        b *= B;
    }
    cout << result;
    return 0;
}
