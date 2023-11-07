#ifndef INPUT_CMD_HPP
#define INPUT_CMD_HPP

#include <exception>
#include <string>
#include <memory>

class CmdInput
{

public:
	std::string GetCommand() const;

private:
	CmdInput() = default;
};

using SPtrCmdInput = std::shared_ptr<CmdInput>;

#endif // INPUT_CMD_HPP
