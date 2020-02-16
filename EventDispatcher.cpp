//
// Created by karol on 15.02.2020.
//

#include "EventDispatcher.h"

void EventDispatcher::addListener(string eventName, EventHandler handler) {
    listeners.emplace(eventName,handler);
}

void EventDispatcher::delListener(string eventName, EventHandler handler) {
    auto ret = listeners.equal_range(eventName);
    for(auto it = ret.first; it != ret.second; ++it) {
        if(it->second.getClassName() == handler.getClassName()) {
            listeners.erase(it);
            break;
        }
    }
}

void EventDispatcher::emit(Event event) {
    auto ret = listeners.equal_range(event.getEventName());
    for(auto it = ret.first; it != ret.second; ++it) {
        std::function<void(Event)> func = it->second.getHandler();
        func(event);
    }
}


