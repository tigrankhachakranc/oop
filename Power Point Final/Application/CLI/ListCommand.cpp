#include "ListCommand.hpp"

ListCommand::ListCommand(MapOfArgs args) : Command(args) {}

void ListCommand::exec()
{
    std::cout << "Executing DisplayCommand" << std::endl;
    for (const auto &pair : Args)
    {
        std::cout << "Argument: " << pair.first << ", Value: " << pair.second << std::endl;
    }
}
