#ifndef I_COMMAND_HPP
#define I_COMMAND_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <memory>

class ICommand
{
public:
	virtual void Execute(std::istringstream &expr) = 0;
	virtual std::shared_ptr<ICommand> Clone() const = 0;
	virtual ~ICommand() = default;
};
using ICommand_SPtr = std::shared_ptr<ICommand>;

#endif // I_COMMAND_HPP
