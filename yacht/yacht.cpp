#include "yacht.h"
#include <array>
namespace yacht {

int sumeq(const std::array<int,5>& dice, int n){
	int score = 0;
	for (int i = 0; i < 5; i++) {
		if(dice[i] == n) {
			score +=n;
		}
	}
	return score;
}

// TODO: add your solution here
int score(const std::array<int,5>& dice, std::string method){
	(void) dice;
	(void) method;

	if (method == "yacht"){
		if (	(dice[0] == dice[1]) && 
			(dice[1] == dice[2]) && 
			(dice[2] == dice[3]) && 
			(dice[3] == dice[4])) {
			return 50;
		} else {
			return 0;
		}
	} else if (method == "ones") {
		return sumeq(dice, 1);
	}
	else return 0;
}

}  // namespace yacht
