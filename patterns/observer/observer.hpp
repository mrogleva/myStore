#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <string>

/// @brief Observer interface to be inherited by each class that should be able to receive notifications.
class Observer {

public:
    virtual ~Observer() = default;

    /// @brief handle the notification.
    /// @param message 
    virtual void update(std::string message/*, ...*/) = 0;
};

#endif // OBSERVER_HPP