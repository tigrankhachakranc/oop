#include "DelCommand.hpp"

DelCommand::DelCommand(MapOfArgs args) : Command(args) {}

void DelCommand::exec()
{
    std::cout << "Executing DelCommand" << std::endl;
    for (const auto &pair : Args)
    {
        std::cout << "Argument: " << pair.first << ", Value: " << pair.second << std::endl;
    }
}
