#ifndef SLIDE_HPP
#define SLIDE_HPP

#include <iostream>
#include <vector>

#include "Item.hpp"

using vectorOfItems = std::vector<Item>;

class Slide
{
public:
    void addItem(const Item &item);
    void delItem(const Id &id);
    vectorOfItems getItems(); // TK: returns copy of itms, not good
    Item getItemById(const Id &id); // TK: returns a copy, not good

private:
    vectorOfItems items;
};

#endif // SLIDE_HPP
