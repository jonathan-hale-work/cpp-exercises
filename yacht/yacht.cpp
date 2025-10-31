#include "yacht.h"
#include <algorithm>
#include <numeric>
#include <iterator>
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
		std::array<int, 7> counts  = {0};
		for (int die : dice){
			counts[die]++;
		}
		if (std::find(std::begin(counts), std::end(counts),2) !=std::end(counts) &&
			std::find(std::begin(counts), std::end(counts),3) !=std::end(counts))
			return std::accumulate(std::begin(dice), std::end(dice), 0);
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
