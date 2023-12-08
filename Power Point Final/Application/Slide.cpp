#include "Slide.hpp"

void Slide::addItem(const Item &item)
{
    items.push_back(item);
}

void Slide::delItem(const Id &id)
{
    items.erase(std::remove_if(items.begin(), items.end(),
                               [&id](const Item &item)
                               { return item.getId() == id; }),
                items.end());
}

vectorOfItems Slide::getItems()
{
    return items;
}

Item Slide::getItemById(const Id &id)
{
    auto it = std::find_if(items.begin(), items.end(), [&id](const Item &item)
                           { return item.getId() == id; });

    if (it != items.end())
    {
        return *it;
    }
    else
    {
        return Item();
    }
}