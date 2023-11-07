#include "CmdTokenizer.hpp"


void Tokenizer::Lexemmer(std::stringstream &expr)
{
    if (!IsWord(expr.str()) && !IsNumber(expr.str()))
    {
        std::string _lexemmerError = "COMPILE ERROR: in case of \"";
    }
}

bool Tokenizer::IsWord(const std::string &expr) const noexcept
{ 
    if (expr[0] == '_' || isalpha(expr[0]))
    {
        for (size_t i = 1; i < expr.length(); ++i)
        {
            if (!isalpha(expr[i]) && !isdigit(expr[i]) && expr[i] != '_')
            {
                return false;
            }
        }
        return true;
    }

    return false;
}

bool Tokenizer::IsNumber(const std::string &expr) const noexcept
{
    for (const auto &_char : expr)
    {
        if (!isdigit(_char))
        {
            return false;
        }
    }
    return true;
}
