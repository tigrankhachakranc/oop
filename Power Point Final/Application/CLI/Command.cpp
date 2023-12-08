#include "Command.hpp"

Command::Command(MapOfArgs args) : Args(args) {}

void Command::exec()
{
    for (const auto &pair : Args)
    {
        std::cout << "Argument: " << pair.first << ", Value: " << pair.second << std::endl;
    }
}