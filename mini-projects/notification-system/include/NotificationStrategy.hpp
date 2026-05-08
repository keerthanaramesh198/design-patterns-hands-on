#ifndef NOTIFICATION_STRATEGY_HPP
#define NOTIFICATION_STRATEGY_HPP

class NotificationStrategy
{
    public:
    virtual ~NotificationStrategy() = default;
    virtual void send()=0;
};

#endif