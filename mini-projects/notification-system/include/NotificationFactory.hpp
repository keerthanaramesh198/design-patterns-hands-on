#include <string>

class NotificationFactory{

    public:
    static NotificationStrategy* create(string type);

};