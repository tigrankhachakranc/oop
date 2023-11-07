#ifndef CMD_PARSER_HPP
#define CMD_PARSER_HPP

#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>

#include "ICommand.hpp"
#include "CmdTokenizer.hpp"

class CmdParser
{
public:
	void Parse(std::stringstream &expr);

private:
	Tokenizer &m_tokenizer;
	CmdParser();
	Token getToken(std::stringstream &expr) const;
	// CommandType getActionType(std::stringstream &expr) const;
	ICommand_SPtr getAction(std::stringstream &expr) const;

private:
	std::unordered_map<std::string, ICommand_SPtr> m_actionsTranslater;
};

#endif // CMD_PARSER_HPP
