#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = health, t=0;
    int j=0, time = attacks[attacks.size()-1][0];
    for(int i=0;i<time+1;i++){
        if(i==attacks[j][0]){
            t = 0;
            answer -= attacks[j][1];
            j++;
            if(answer < 1) return -1;
        }else{
            t++;
            answer += bandage[1];
            if(t==bandage[0]){
                answer += bandage[2];
                t = 0;
            }
            if(answer > health) answer = health;
        }
        
    }
    return answer;
}