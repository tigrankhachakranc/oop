#include "ExitCommand.hpp"

ExitCommand::ExitCommand(MapOfArgs args) : Command(args) {}

void ExitCommand::exec()
{
    std::cout << "Executing DisplayCommand" << std::endl;
    for (const auto &pair : Args)
    {
        std::cout << "Argument: " << pair.first << ", Value: " << pair.second << std::endl;
    }
}
