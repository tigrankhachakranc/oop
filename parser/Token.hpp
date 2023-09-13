#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <iostream>
using String = std::string;
using Istream = std::istream;

class CToken
{
private:
    Istream &Stream;

public:
    CToken(Istream&);
    ~CToken();
    String getType();
};

#endif // TOKEN_HPP