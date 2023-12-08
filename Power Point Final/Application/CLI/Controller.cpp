#include "Controller.hpp"

void Controller::run()
{
    bool isExit = true;
    Command cmd;
    while (!isExit)
    {
        cmd = Parser.parse(getInput());
        cmd->exec();
    }
}

String Controller ::getInput()
{
    std::string input;
    std::getline(std::cin, input);
    return input;
}