#include <iostream>
#include "EmailStrategy.hpp"
#include "NotificationService.hpp"
using namespace std;


int main(){
    EmailStrategy email;
    NotificationService notifyService(&email);
    notifyService.notify();

}