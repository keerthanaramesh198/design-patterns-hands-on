#include <iostream>
#include "NotificationStrategy.hpp"

using namespace std;

class SMSStrategy : public NotificationStrategy {
    void send();
};