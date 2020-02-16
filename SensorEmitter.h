//
// Created by karol on 16.02.2020.
//

#ifndef EVENTDISPATCHERTEST_SENSOREMITTER_H
#define EVENTDISPATCHERTEST_SENSOREMITTER_H

#include "EventDispatcher.h"

class SensorEmitter {
public:
    SensorEmitter(EventDispatcher *evtDispatcher) : evtDispatcher(evtDispatcher) {}
    void emit(string eventName) {
        Event event(eventName);
        evtDispatcher->emit(event);
    }
private:
    EventDispatcher* evtDispatcher;
};
#endif //EVENTDISPATCHERTEST_SENSOREMITTER_H
