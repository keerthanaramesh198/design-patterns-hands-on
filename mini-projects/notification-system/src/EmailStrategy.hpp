#include <iostream>
#include "NotificationStrategy.hpp"

using namespace std;

class EmailStrategy : public NotificationStrategy {
    void send(){
        cout<<"sent email"<<endl;
    }
};