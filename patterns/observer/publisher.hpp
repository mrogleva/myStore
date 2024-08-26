#ifndef PUBLISHER_HPP
#define PUBLISHER_HPP

#include <vector>
#include <string>
#include "observer.hpp"

/// @brief Publisher interface to be used by each class that should be able to send notifications.
class Publisher {

public:
    virtual ~Publisher() = default;
    virtual void subscribe(Observer* observer) = 0;
    virtual void unsubscribe(Observer* observer) = 0;

    /// @brief called to notify all observers for an event.
    virtual void notify(std::string message/*, ...*/) = 0;

private:
    std::vector<Observer*> observers;
};

#endif // PUBLISHER_HPP