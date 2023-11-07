#include <algorithm>
#include <cstring>
#include <memory>
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include <string>

#include "readFromFile.hpp"
#include "InputCmd.hpp"
#include "CmdParser.hpp"
#include "fileManager.hpp"

void FileManager::ParseLine(std::stringstream &line)
{
	std::string currCommand;
	line >> currCommand;
	CmdParser cmdParser;
	cmdParser.Parse(line);
}

void FileManager::GetData()
{
	SPtrCmdInput cmdPtr;
	m_file.open(m_FPath, std::ios::app);
	std::string current_CmdLineInput;

	while (true)
	{
		current_CmdLineInput = cmdPtr->GetCommand();
		std::transform(current_CmdLineInput.begin(), current_CmdLineInput.end(), current_CmdLineInput.begin(), ::toupper);
		if (current_CmdLineInput == "END")
		{
			break;
		}

		m_file << current_CmdLineInput << std::endl;
	}
	m_file.close();
}

FileManager::FileManager() : m_FPath("data.txt")
{
	try
	{
		GetData();
		ParseData();
	}
	catch (const std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
}

static FileManager &GetInstance()
{
	static FileManager instance;
	return instance;
}

void FileManager::ParseData()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	m_file.open(m_FPath, std::ios::in);
	do
	{
		std::stringstream currLine(getLine(m_file));
		ParseLine(currLine);
	} while (!m_file.eof());
}


