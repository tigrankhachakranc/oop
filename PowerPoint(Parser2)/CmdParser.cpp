#include "CmdParser.hpp"

#include <algorithm>
#include <exception>
#include <iostream>
#include <memory>

Token CmdParser::getToken(std::stringstream &expr) const
{
	Token currToken;
	currToken.m_tokenType = ETokenType::Invalid;

	return currToken;
}

void CmdParser::Parse(std::stringstream &expr)
{
	m_tokenizer.Lexemmer(expr);
}


