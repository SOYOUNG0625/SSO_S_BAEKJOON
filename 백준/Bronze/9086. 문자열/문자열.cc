#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    for(int i=0;i<n;i++){
        int m=s[i].length();
        if(m>1){
            cout << s[i][0] << s[i][m-1] << endl;
        }
        else{
            cout << s[i][0] << s[i][0] << endl;            
        }
    }
    return 0;
}