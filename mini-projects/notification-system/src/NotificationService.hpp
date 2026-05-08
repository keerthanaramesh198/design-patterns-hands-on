#include "NotificationStrategy.hpp"

class NotificationService
{
    NotificationStrategy* strategy;

    public:

    NotificationService(NotificationStrategy* s){
        strategy = s;
    }

    void notify()
    {
        strategy->send();
    }
};