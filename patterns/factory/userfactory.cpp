#include "userfactory.hpp"
#include "../../store/inc/customer.hpp"
#include "../../store/inc/supplier.hpp"

std::shared_ptr<User> UserFactory::createUser(std::string name, std::string role)
{
    if (role == "customer")
    {
        return std::make_shared<Customer>(name);
    }
    if (role == "supplier")
    {
        return std::make_shared<Supplier>(name);
    }
    return nullptr;
}