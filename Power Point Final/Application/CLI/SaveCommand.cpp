#include "SaveCommand.hpp"

SaveCommand::SaveCommand(MapOfArgs args) : Command(args) {}

void SaveCommand::exec()
{
    std::cout << "Executing DisplayCommand" << std::endl;
    for (const auto &pair : Args)
    {
        std::cout << "Argument: " << pair.first << ", Value: " << pair.second << std::endl;
    }
}
