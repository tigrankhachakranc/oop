#include "DisplayCommand.hpp"

DisplayCommand::DisplayCommand(MapOfArgs args) : Command(args) {}

void DisplayCommand::exec()
{
    std::cout << "Executing DisplayCommand" << std::endl;
    for (const auto &pair : Args)
    {
        std::cout << "Argument: " << pair.first << ", Value: " << pair.second << std::endl;
    }
}
