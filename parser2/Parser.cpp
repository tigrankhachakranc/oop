#include "Parser.hpp"
#include <iostream>
#include <sstream>

std::vector<std::string> Parser:: parseCommand(const std::string &command)
{
    std::vector<std::string> tokens;
    std::istringstream iss(command);
    std::string token;

    while (iss >> token)
    {
        tokens.push_back(token);
    }

    return tokens;
}

void Parser:: parseCommand(const std::vector<std::string> &args)
{
    if (args.size() == 1)
    {
        std::cout << "Parsing command: " << args[0] << std::endl;
    }
    else
    {
        std::cerr << "Usage: parse <command_to_parse>" << std::endl;
    }
}
