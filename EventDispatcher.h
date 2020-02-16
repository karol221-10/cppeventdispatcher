//
// Created by karol on 15.02.2020.
//

#ifndef EVENTDISPATCHERTEST_EVENTDISPATCHER_H
#define EVENTDISPATCHERTEST_EVENTDISPATCHER_H
#include <unordered_map>
#include "Event.h"
#include "EventHandler.h"
using std::unordered_multimap;

class EventDispatcher {
public:
    void addListener(string eventName, EventHandler handler);
    void delListener(string eventName, EventHandler handler);
    void emit(Event event);
private:
    unordered_multimap<string,EventHandler> listeners;
};
#endif //EVENTDISPATCHERTEST_EVENTDISPATCHER_H
