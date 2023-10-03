#ifndef C_PARSER_HPP
#define C_PARSER_HPP

#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <algorithm>
#include <exception>
#include "Tokenizer.hpp"
#include "Token.hpp"


class CParser
{

public:
    void Parse(std::stringstream &expr);

private:
    CParser();
    Token getToken(std::stringstream &expr) ;
    ActionType getAction(std::stringstream &expr) ;

private:
    const std::unordered_map<std::string, ActionType> m_actionsTranslater;
    Tokenizer &m_tokenizer;
};

#endif // C_PARSER_HPP
