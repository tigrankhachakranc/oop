#include "Tokenizer.hpp"

void Tokenizer::tokenize(std::stringstream &expr)
{
    if (!IsWord(expr) && !IsNumber(expr))
    {
        throw std::logic_error("COMPILE ERROR: in case of \"");
    }
}