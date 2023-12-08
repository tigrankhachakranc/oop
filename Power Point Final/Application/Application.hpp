#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "CLI/Controller.hpp"

class Application
{

private:
    Controller *controller;

public:
    Controller* getController();
};

#endif // APPLICATION_HPP