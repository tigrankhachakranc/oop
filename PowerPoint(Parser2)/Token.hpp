#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>


    enum class ETokenType{
        Invalid,
        Identifier,
        Number
    };

    enum class ECommandType{
        Set,
        Reset,
        Create,
        Present,
        Add,
        Remove
    };

    struct Token{
        ETokenType m_tokenType;

            ECommandType m_commandType;
            int number;

    };


#endif // TOKEN_HPP
