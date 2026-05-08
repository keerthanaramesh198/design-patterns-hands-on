#ifndef NOTIFICATION_STRATEGY_HPP
#define NOTIFICATION_STRATEGY_HPP

class NotificationStrategy
{
    public:
    virtual void send()=0;
    virtual ~NotificationStrategy() {}
};

#endif