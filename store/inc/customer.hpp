#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include "user.hpp"

/// @brief A concrete user type.
class Customer : public User {

public:
    Customer(std::string name);
    virtual ~Customer() = default;
    void update(std::string message) override;
    
};

#endif // CUSTOMER_HPP