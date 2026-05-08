#include "NotificationFactory.hpp"
#include "EmailStrategy.hpp"
#include "SMSStrategy.hpp"
#include "PushNotificStrategy.hpp"
#include <string>
#include <iostream>
using namespace std;

NotificationStrategy* NotificationFactory::create(string type)
{
     if(type == "EMAIL"){
            return new EmailStrategy();
        } else if(type == "SMS") {
            return new SMSStrategy();
        } else if(type == "PUSH") {
            return new PushNotificStrategy();
        } else {
            cout<<"Type not available"<<endl;
            return nullptr;
        }
}