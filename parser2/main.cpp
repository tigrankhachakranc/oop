// main.cpp
#include <iostream>
#include <string>
#include "Tokenize.hpp"
#include "Parser.hpp"
#include "CommandRegistry.hpp"

int main()
{
    CommandRegistry registry;
    registry.registerCommand("parse", parser.parseCommand());

    std::string input;
    std::cout << "Enter a command to parse: ";
    std::getline(std::cin, input);

    if (!input.empty())
    {
        registry.executeCommand("parse");
    }

    return 0;
}
