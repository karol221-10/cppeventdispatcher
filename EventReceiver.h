//
// Created by karol on 16.02.2020.
//

#ifndef EVENTDISPATCHERTEST_EVENTRECEIVER_H
#define EVENTDISPATCHERTEST_EVENTRECEIVER_H

#include "EventDispatcher.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class EventReceiver {
public:
    EventReceiver(EventDispatcher* dispatcher, string className, string eventName, string msg) {
        EventHandler eventHandler;
        eventHandler.setClassName(className);
        eventHandler.setHandler(std::bind(&EventReceiver::onSensorActivated,this,std::placeholders::_1));
        dispatcher->addListener(eventName,eventHandler);
        this->msg = msg;
    }

    void onSensorActivated(Event event) {
        std::cout<<msg<<std::endl;
    }
private:
    string msg;
};

#endif //EVENTDISPATCHERTEST_EVENTRECEIVER_H
