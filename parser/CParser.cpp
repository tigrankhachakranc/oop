#include "CParser.hpp"

ActionType CParser::getAction(std::stringstream &expr) 
{
    std::string action;
    expr >> action;
    std::transform(action.begin(), action.end(), action.begin(), ::tolower);
    if (m_actionsTranslater.find(action) == m_actionsTranslater.end())
    {
        throw std::logic_error("ERROR: Invalid action\n");
    }

    return m_actionsTranslater.at(action);
}

Token CParser::getToken(std::stringstream &expr) 
{
    Token currToken;
    currToken.m_actionType = getAction(expr);

    return currToken;
}

void CParser::Parse(std::stringstream &expr)
{
    m_tokenizer.tokenize(expr);
}

CParser::CParser() : m_actionsTranslater
{
    {"create", ActionType::Create},
        {"add", ActionType::Add},
    {
        "remove", ActionType::Remove
    }
}