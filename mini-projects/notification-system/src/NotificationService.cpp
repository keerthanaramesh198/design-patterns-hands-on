#include "NotificationService.hpp"

NotificationService::NotificationService(NotificationStrategy *s)
{
    strategy = s;
}

void NotificationService::notify()
{
    strategy->send();
}
