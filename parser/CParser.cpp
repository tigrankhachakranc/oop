#include "CParser.hpp"

CParser::CParser(Istream &str) : Stream(str) {}

CCommand CParser::commandParse(IsStringStream token)
{

    while (true)
    {
        VectorOfStrings tokens = tokenize(token);

        String command = "";

        for (const String &t : tokens)
        {
            command += t + " ";
        }

        if (!command.empty())
        {
            command.pop_back();
        }

        CCommandRegister cmdrg;
        CCommand cmd = cmdrg.findCommand(command);

        cmd.addArguments(tokens);

        if (cmd.isValid(command))
        {
            return cmd;
        }
        else
        {
            return invalidCommand("Invalid command: " + command);
        }
    }
}

// add -op1 1 -op2 2
//  token=add
// key=-op1 value=1

VectorOfStrings CParser::tokenize(IsStringStream &input)
{
    VectorOfStrings tokens;

    String token;

    while (input >> token)
    {
        tokens.push_back(token);
    }

    return tokens;
}

CCommand CParser::invalidCommand(String msg)
{
    std::cout << msg;
}
