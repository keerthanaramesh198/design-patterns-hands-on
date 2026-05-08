#include <iostream>
#include "NotificationService.hpp"
#include "NotificationFactory.hpp"
using namespace std;


int main(){
    string notficationType;
    cout<<"What type of Notification is to be sent:";
    cin>>notficationType;
    NotificationStrategy* notificationObj = NotificationFactory::create(notficationType);
    NotificationService notifyService(notificationObj);
    notifyService.notify();
}