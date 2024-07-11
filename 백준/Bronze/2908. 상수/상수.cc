#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int ia=stoi(a), ib=stoi(b);
    if(ia>ib){
        cout << a << endl;
    }
    else{
        cout << b << endl;
    }
    return 0;
}