#ifndef C_PARSER_HPP
#define C_PARSER_HPP

#include <iostream>
#include <vector>
#include <sstream>
#include "Command.hpp"

using String = std::string;
using Istream = std::istream;
using VectorOfStrings = std::vector<String>;
using IsStringStream = std::istringstream;

class CParser
{
private:
    Istream &Stream;

public:
    CParser(Istream &);
    CCommand commandParse(IsStringStream);
    CCommand invalidCommand(String);
    VectorOfStrings tokenize(IsStringStream&);
};

#endif // C_PARSER_HPP
