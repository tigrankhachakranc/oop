#include <iostream>
#include <cassert>
#include <exception>
#include <string>
#include <memory>

#include "InputCmd.hpp"

std::string CmdInput::GetCommand() const
{
	std::string CurrentCommand = "";

	std::cout << "Input command: ";
	std::cin >> CurrentCommand;
	return CurrentCommand;
}

