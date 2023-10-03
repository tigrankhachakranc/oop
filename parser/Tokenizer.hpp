#ifndef TOKENIZER_HPP
#define TOKENIZER_HPP

#include <iostream>
#include <string>


class Tokenizer
{
public:
    void tokenize(std::stringstream &expr);

private:
    bool IsWord(std::string &expr);
    bool IsNumber(std::string &expr);
};

#endif // TOKENIZER_HPP