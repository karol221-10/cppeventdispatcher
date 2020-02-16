#include <iostream>
#include "EventDispatcher.h"
#include "EventHandler.h"
#include "SensorEmitter.h"
#include "EventReceiver.h"

int main() {
    EventDispatcher eventDispatcher;
    SensorEmitter sensorEmitter(&eventDispatcher);
    EventReceiver eventReceiver(&eventDispatcher,"class1","ON_SENSOR_ACTIVATED","On sensor activated nr 1");
    EventReceiver eventReceiver2(&eventDispatcher,"class2","ON_SENSOR_ACTIVATED","On sensor activated nr 2");
    EventReceiver eventReceiver3(&eventDispatcher, "class3","ON_EVENT","ON_EVENT event activated nr 1");
    sensorEmitter.emit("ON_SENSOR_ACTIVATED");
    sensorEmitter.emit("ON_EVENT");
}
