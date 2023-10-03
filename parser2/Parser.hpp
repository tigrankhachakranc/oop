#ifndef PARSER_H
#define PARSER_H

#include <string>
#include <vector>

class Parser
{

public:
    std::vector<std::string> parseCommand(const std::string &command);
    void parseCommand(const std::vector<std::string> &args);
};

#endif // PARSER_H
