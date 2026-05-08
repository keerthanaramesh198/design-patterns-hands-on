#include "NotificationStrategy.hpp"

class NotificationService
{
    NotificationStrategy* strategy;

    public:

    NotificationService(NotificationStrategy* s);
    void notify();
};