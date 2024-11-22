#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> count(3, 0);
    int a[] = {1, 2, 3, 4, 5}, b[] = {2, 1, 2, 3, 2, 4, 2, 5}, c[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}, sa = 0, sb = 0, sc = 0;
    for(int i=0;i<answers.size();i++){
        if(a[i%5]==answers[i]){
            count[0]++;
        }
        if(b[i%8]==answers[i]){
            count[1]++;
        }
        if(c[i%10]==answers[i]){
            count[2]++;
        }
    }
    int maxScore = *max_element(count.begin(), count.end());

    for(int i=0;i<3;i++){
        if(count[i] == maxScore) {
            answer.push_back(i+1);
        }
    }
    
    return answer;
}