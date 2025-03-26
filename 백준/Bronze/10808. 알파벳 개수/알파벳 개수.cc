#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string S;
    cin >> S;
    vector<int> alfa(26, 0);
    for(const auto s:S){
        alfa[s-'a']+=1;
    }
    for(const int i:alfa) cout << i << " ";
}