#ifndef COMMAND_FACTORY_HPP
#define COMMAND_FACTORY_HPP

#include "Command.hpp"

class CommandFactory : public Command
{
public:
    static Command create(String name, MapOfArgs args);
};

#endif // COMMAND_FACTORY_HPP