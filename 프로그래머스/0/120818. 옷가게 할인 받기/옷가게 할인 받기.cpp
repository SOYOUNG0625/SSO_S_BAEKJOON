#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    if(price>499999) return price*8/10;
    if(price>299999) return price*9/10;
    if(price>99999) return price*95/100;
    return price;
}