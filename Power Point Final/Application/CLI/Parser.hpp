#ifndef PARSER_HPP
#define PARSER_HPP

#include <vector>
#include <sstream>
#include "Command.hpp"

using VectorOfStrings = std::vector<String>;

class Parser
{
public:
    Command parse(String);

private:
    VectorOfStrings tokenize(String);
};

#endif // PARSER_HPP
