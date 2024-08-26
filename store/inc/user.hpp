#ifndef USER_HPP
#define USER_HPP

#include <string>
#include "../../patterns/observer/observer.hpp"

/// @brief User base class.
class User : public Observer
{

public:
    User(std::string name);
    /*
    todo: 
        - decide if pass by copy should be allowed 
    */
    // User(const User&) = delete;
    // User& operator=(const User&) = delete;
    // User(User&&) = delete;
    virtual ~User() = default;

    /// @brief Get the name of the user.
    const std::string getName() const;

private:
    const std::string name;
};

#endif // USER_HPP