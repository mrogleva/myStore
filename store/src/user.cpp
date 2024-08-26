#include "../inc/user.hpp"

User::User(std::string name) : name(name)
{
}

const std::string User::getName() const
{
    return name;
}