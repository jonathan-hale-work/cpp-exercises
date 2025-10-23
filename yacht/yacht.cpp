#include "yacht.h"
#include <array>
namespace yacht {

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
		return 3;
	}
	else return 0;
}

}  // namespace yacht
