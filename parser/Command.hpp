#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <iostream>
#include <map>
#include "CParser.hpp"

using Map = std::map<std::string, std::string>;

class CCommand
{

private:
    Map commandArguments;

public:
    CCommand();     
    bool isValid(String); 
    void addArguments(const VectorOfStrings&);
};

#endif // COMMAND_HPP