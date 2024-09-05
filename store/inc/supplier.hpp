#ifndef SUPPLIER_HPP
#define SUPPLIER_HPP

#include "user.hpp"

/// @brief A concrete user type.
class Supplier : public User
{

public:
    Supplier(std::string name);
    ~Supplier() = default;
    void update(std::string message) override;
};

#endif // SUPPLIER_HPP