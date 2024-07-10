#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int re;
        cin >> re;
        string s;
        cin >> s;
        int k=0;
        while(s[k]!='\0'){
            for(int j=0;j<re;j++){
                cout << s[k];
            }
            k++;
        }
        cout << endl;        
    }
}