#ifndef CMD_TOKENIZER_HPP
#define CMD_TOKENIZER_HPP

#include <exception>
#include <sstream>
#include <cctype>
#include "Token.hpp"

class Tokenizer
{
public:
    void Lexemmer(std::stringstream &expr);

private:
    Tokenizer();
    bool IsWord(const std::string &expr) const;
    bool IsNumber(const std::string &expr) const;
};

#endif // CMD_TOKENIZER_HPP