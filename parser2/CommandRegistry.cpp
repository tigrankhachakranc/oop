#include "CommandRegistry.hpp"
#include <iostream>

void CommandRegistry::registerCommand(const std::string &commandName, CommandHandler handler)
{
    commandMap[commandName] = handler;
}

void CommandRegistry::executeCommand(const std::string &command)
{
    auto it = commandMap.find(command);
    if (it != commandMap.end())
    {
        it->second({});
    }
    else
    {
        std::cerr << "Error: Command '" << command << "' not found." << std::endl;
    }
}
