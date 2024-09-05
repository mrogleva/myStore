#include "../inc/supplier.hpp"
#include <iostream>

Supplier::Supplier(std::string name) : User(name)
{
}

void Supplier::update(std::string message)
{
    std::cout << "Supplier " << getName() << " received message: " << message << std::endl;
}
