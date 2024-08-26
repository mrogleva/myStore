#ifndef USERFACTORY_HPP
#define USERFACTORY_HPP

#include <string>
#include "../../businessLogic/inc/user.hpp"

class UserFactory {

public:
    User* createUser(std::string name, std::string role);
};

#endif // USERFACTORY_HPP