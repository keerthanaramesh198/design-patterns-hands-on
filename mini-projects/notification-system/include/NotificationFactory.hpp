#include <string>
#include "NotificationStrategy.hpp"
using namespace std;

class NotificationFactory{

    public:
    static NotificationStrategy* create(string type);

};