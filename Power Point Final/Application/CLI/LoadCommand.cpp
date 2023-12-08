#include "LoadCommand.hpp"

LoadCommand::LoadCommand(MapOfArgs args) : Command(args) {}

void LoadCommand::exec()
{
    std::cout << "Executing DisplayCommand" << std::endl;
    for (const auto &pair : Args)
    {
        std::cout << "Argument: " << pair.first << ", Value: " << pair.second << std::endl;
    }
}
