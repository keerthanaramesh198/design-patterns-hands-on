#include <iostream>
#include "NotificationStrategy.hpp"

using namespace std;

class PushNotificStrategy : public NotificationStrategy {
    void send(){
        cout<<"sent push notification"<<endl;
    }
};