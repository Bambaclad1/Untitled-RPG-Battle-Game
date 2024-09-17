#include "Item.h"

Item::Item(std::string aName)
{
    name = aName;
}

Item::~Item()
{
}

std::string Item::GetName()
{
    return name;
}

void Item::SetName(std::string aName)
{
    name = aName;
}