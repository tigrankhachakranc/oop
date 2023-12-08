#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include "Action.hpp"
#include <iostream>
#include <vector>

using vectorOfActions = std::vector<Action>;

class Director
{

private:
    vectorOfActions actions;
    int currentIndex;

public:
    void undo();
    void redo();
    void add(Action);
};

#endif // DIRECTOR_HPP