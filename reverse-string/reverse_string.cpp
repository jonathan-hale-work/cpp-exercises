#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
	std::string reverse_string(std::string s){
		
		std::string r{""};
		int len = s.length();
		for (int i = 0; i < len/2; i++) {
			int far = len - i -1;
			char farChar  = s.at(far);
			s.at(far) = s.at(i);
			s.at(i) =farChar;
		}
		return s;
	}

}  // namespace reverse_string
