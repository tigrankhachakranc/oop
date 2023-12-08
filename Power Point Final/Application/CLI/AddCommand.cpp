#include "AddCommand.hpp"

AddCommand::AddCommand(MapOfArgs args) : Command(args) {}

void AddCommand::exec()
{

    std::cout << "Executing AddCommand" << std::endl;
    for (const auto &pair : Args)
    {
        std::cout << "Argument: " << pair.first << ", Value: " << pair.second << std::endl;
    }
}