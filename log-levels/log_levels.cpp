#include <string>

namespace log_line {
std::string message(std::string line) {
   int level_end = line.find(" ");
   int message_start = level_end + 1;
   return line.substr(message_start);
}

std::string log_level(std::string line) {
    // return the log level
    int level_start = 1;
    int level_end = line.find("]");
    int level_len = level_end - level_start;
    return line.substr(level_start, level_len);
}

std::string reformat(std::string line) {
    // return the reformatted message
    return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line
