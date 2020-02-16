//
// Created by karol on 15.02.2020.
//

#ifndef EVENTDISPATCHERTEST_EVENT_H
#define EVENTDISPATCHERTEST_EVENT_H
#include <string>

using std::string;
class Event {
public:
    Event(const string &eventName) : eventName(eventName) {}

    const string &getEventName() const {
        return eventName;
    }

private:
    string eventName;
};
#endif //EVENTDISPATCHERTEST_EVENT_H
