#include <iostream>
using namespace std;

void sendNotification(string notificationType){
    if(notificationType == "EMAIL") {
        cout<<"Sending email"<<endl;
    } else if(notificationType == "SMS") {
        cout<<"Sending SMS"<<endl;
    } else if(notificationType == "PUSH") {
        cout<<"Send push notification"<<endl;
    } else {
        cout<<"invalid type"<<endl;
    }
}

int main(){
    sendNotification("SMS");
}