#ifndef USERFACTORY_HPP
#define USERFACTORY_HPP

#include <string>
#include <memory>
#include "../../store/inc/user.hpp"

class UserFactory
{

public:
    std::shared_ptr<User> createUser(std::string name, std::string role);
};

#endif // USERFACTORY_HPP