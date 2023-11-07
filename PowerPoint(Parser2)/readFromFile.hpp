#ifndef READ_FROM_FILE_HPP
#define READ_FROM_FILE_HPP

#include <cstring>
#include <fstream>

std::string getLine(std::fstream &file)
{
	std::string lExpr;
	std::getline(file, lExpr);
	return lExpr;
}

#endif // READ_FROM_FILE_HPP
