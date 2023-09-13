#include "CParser.hpp"


CParser::CParser(Istream &str) : Stream(str) {}

CCommand CParser::commandParse(CToken token)
{

    while (true)
    {
        // CDisplay read;
        // String commandString = read.getNextCommandString();
        // String command = createCommandFromInputToken(token);
        CCommand cmd;
        String command = token.getType() + cmd.addArguments(); //////////////////
        cmd = cmd.find(command);
        if (cmd.isValid())
        {
            return cmd;
        }
        else
        {
            return invalidCommand("Invalid command : " + cmd);
        }
    }
}

// add -op1 1 -op2 2
//  token=add
// key=-op1 value=1

CCommand CParser::invalidCommand(String msg)
{
    std::cout<<msg;
}