#pragma once

#include <string>

class Item
{
public:
    Item(std::string aName); //<- Constructor
    ~Item();//< - Destructor

    std::string GetName();
    void SetName(std::string aName);

protected:
    std::string name;
};