#include "Command.hpp"

CCommand::CCommand()
{
    commandArguments["add"] = "-op1 -op2";
    commandArguments["mull"] = "-op1 -op2";
    commandArguments["sub"] = "-op1 -op2";
    commandArguments["sqrt"] = "-op";
    commandArguments["help"] = "";
    commandArguments["div"] = "-op1 -op2";
    commandArguments["pow"] = "-op1 -op2";
    commandArguments["cmp"] = "-op1 -op2";
}

bool CCommand::isValid(String command)
{
    auto it = commandArguments.find(command);

    if (it != commandArguments.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void addArguments(const VectorOfStrings &tokens)
{

}