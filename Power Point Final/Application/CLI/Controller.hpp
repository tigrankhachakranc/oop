#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include "Parser.hpp"
#include "Command.hpp"

class Controller
{

public:
    void run();

private:
    String getInput();
};

#endif // CONTROLLER_HPP