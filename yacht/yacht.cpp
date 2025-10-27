#include "yacht.h"
namespace yacht {

//Goal: use C++ STL features:
//std::any_of, std::all_of, std::iterator, <algorithm> <numeric> std::accumulate
//using, std::find, auto, begin, end , lambda function, assert

int sumeq(const std::array<int,5>& dice, int n){
	int score = 0;
	for (auto die: dice) {
		if(die == n) {
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
	} else if (method == "twos") {
		return sumeq(dice, 2);
	} else if (method == "threes") {
		return sumeq(dice, 3);
	} else if (method == "fours") {
		return sumeq(dice, 4);
	} else if (method == "fives") {
		return sumeq(dice, 5);
	} else if (method == "sixes") {
		return sumeq(dice, 6);
	} else if (method == "full house") {
		int score = 0;
		int counts[6] = {0};
		for (int i = 0; i < 5; i++){
			score += dice[i];
			counts[dice[i]]++;
		}
		bool setOfTwo=false;
		bool setOfThree=false;
		for (int i = 0; i < 6; i++){
			if (counts[i]==2) setOfTwo=true;
			if (counts[i]==3) setOfThree=true;
		}
		if (setOfTwo && setOfThree)
			return score;
		else
			return 0;
	} else if (method == "four of a kind") {
		int counts[7]={0};	
		for(int i=0; i < 5; i++){
			int die =dice[i];
			counts[die]+=1;
			if (counts[die] >= 4) {
				return die*4;
			}
		}
		return 0;
	} else if (method == "little straight") {
		
		int counts[7]={0};	
		for(int i=0; i < 5; i++){
			int die =dice[i];
			counts[die]+=1;
		}
		if (counts[1]&&counts[2]&&counts[3]&&counts[4]&&counts[5])
			return 30;
		else return 0;
	} else if (method == "big straight") {
		
		int counts[7]={0};	
		for(int i=0; i < 5; i++){
			int die =dice[i];
			counts[die]+=1;
		}
		if (counts[2]&&counts[3]&&counts[4]&&counts[5]&&counts[6])
			return 30;
		else 
			return 0;
	} else if (method == "choice") {
		int sum =0;
		for(int i=0; i < 5; i++) {
			sum +=dice[i];
		}
		return sum;
	}
	else return 0;
}

}  // namespace yacht
