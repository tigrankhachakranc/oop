#ifndef C_PARSER_HPP
#define C_PARSER_HPP

#include <iostream>
#include "Token.hpp"


class CParser
{
private:
    Istream &Stream;

public:
    CParser(Istream &);
    ~CParser();
    CCommand commandParse(CToken);
    CCommand invalidCommand(String);
};

#endif // C_PARSER_HPP
