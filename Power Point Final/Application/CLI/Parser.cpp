#include "Parser.hpp"

Command Parser::parse(String input)
{
    VectorOfStrings tokens = tokenize(input);

    if (tokens.empty())
    {
        return Command();//?
    }

    std::string commandName = tokens[0];

    VectorOfStrings arguments(tokens.begin() + 1, tokens.end());

    Command parsedCommand(commandName, arguments);//map?

    return parsedCommand;
}

VectorOfStrings Parser::tokenize(String input)
{
    VectorOfStrings tokens;
    std::istringstream tokenizer(input);
    std::string token;

    while (tokenizer >> token)
    {
        tokens.push_back(token);
    }

    return tokens;
}
