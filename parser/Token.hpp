#ifndef TOKEN_HPP
#define TOKEN_HPP

enum class ActionType
{
    Set,
    Reset,
    Create,
    Present,
    Add,
    Remove
};

struct Token
{
    ActionType m_actionType;
};

#endif // TOKEN_HPP
