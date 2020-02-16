//
// Created by karol on 15.02.2020.
//

#ifndef EVENTDISPATCHERTEST_EVENTHANDLER_H
#define EVENTDISPATCHERTEST_EVENTHANDLER_H
#include <functional>
#include "Event.h"
#include <string>

using std::function;
using std::string;

class EventHandler {
public:
    const function<void(Event)> &getHandler() const {
        return handler;
    }

    void setHandler(const function<void(Event)> &handler) {
        EventHandler::handler = handler;
    }

    const string &getClassName() const {
        return className;
    }

    void setClassName(const string &className) {
        EventHandler::className = className;
    }

private:
    string className;
    function<void(Event)> handler;
};
#endif //EVENTDISPATCHERTEST_EVENTHANDLER_H
