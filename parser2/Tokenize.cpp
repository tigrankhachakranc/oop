#include "Tokenize.hpp"
#include <sstream>

std::vector<std::string> tokenizeInputLine(const std::string& inputLine) {
    std::vector<std::string> tokens;
    std::istringstream iss(inputLine);
    std::string token;

    while (iss >> token) {
        tokens.push_back(token);
    }

    return tokens;
}
