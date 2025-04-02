#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(const auto s:my_string){
        if(s>='a'&&s<='z'){
            answer += s-('a'-'A');
        }else{
            answer += s+('a'-'A');
        }
    }
    return answer;
}