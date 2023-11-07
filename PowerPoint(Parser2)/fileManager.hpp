#ifndef FILE_MANAGER_HPP
#define FILE_MANAGER_HPP

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

#include "InputCmd.hpp"

class IBaseComponents
{
public:
	virtual void GetData() = 0;
	virtual void ParseData() = 0;
	virtual void ParseLine(std::stringstream &) = 0;
	virtual ~IBaseComponents() = default;

private:
};

class FileManager : public IBaseComponents
{
public:
	void GetData();
	void ParseData();

	FileManager();

private:
	void ParseLine(std::stringstream &) override;

private:
	const std::string m_FPath;
	std::fstream m_file;
};

#endif // FILE_MANAGER_HPP
