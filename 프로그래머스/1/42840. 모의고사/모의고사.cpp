#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int a[] = {1, 2, 3, 4, 5}, b[] = {2, 1, 2, 3, 2, 4, 2, 5}, c[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}, sa = 0, sb = 0, sc = 0;
    for(int i=0;i<answers.size();i++){
        if(a[i%5]==answers[i]){
            sa++;
        }
        if(b[i%8]==answers[i]){
            sb++;
        }
        if(c[i%10]==answers[i]){
            sc++;
        }
    }
    int maxScore = max(sa, max(sb, sc));

    if(sa == maxScore) {
        answer.push_back(1);
    }
    if(sb == maxScore) {
        answer.push_back(2);
    }
    if(sc == maxScore) {
        answer.push_back(3);
    }
    return answer;
}