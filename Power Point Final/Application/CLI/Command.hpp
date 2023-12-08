#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <iostream>
#include <map>
#include <string>

using String = std::string;
using MapOfArgs = std::map<String, String>;

class Command
{
private:
    MapOfArgs Args;

public:
    Command(MapOfArgs);
    virtual void exec();
};

#endif // COMMAND_HPP