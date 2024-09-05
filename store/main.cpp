#include "../patterns/factory/userfactory.hpp"

int main()
{
    UserFactory factory;
    std::shared_ptr<User> customer = factory.createUser("John", "customer");
    std::shared_ptr<User> s = factory.createUser("X", "supplier");
    customer->update("Hello World!");
    s->update("supplier");

    return 0;
}