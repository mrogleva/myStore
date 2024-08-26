#include "../inc/customer.hpp"

#include <iostream>

Customer::Customer(std::string name) : User(name)
{
}

void Customer::update(std::string message)
{
    std::cout << "Customer " << getName() << " received message: " << message << std::endl;
}
