#include "yacht.h"
#include <array>
namespace yacht {

// TODO: add your solution here
int score(const std::array<int,5>& dice, std::string method){
	(void) dice;
	(void) method;

	if (	(dice[0] == dice[1]) && 
		(dice[1] == dice[2]) && 
		(dice[2] == dice[3]) && 
		(dice[3] == dice[4])) {
		return 50;
	}
return 0;
}

}  // namespace yacht
