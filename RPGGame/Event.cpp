#include "stdafx.h"
#include "Event.h"


Event::Event(Time time)
{
	static Time eventCounter = 0;
	this->time = time;
	eventNum = eventCounter++;
}

Event::Event(Time time, u32 eventNum) {
	this->time = time;
	this->eventNum = eventNum;
}

void Event::executeEvent() {
	effect->executeEffect();
}

Event::~Event()
{
}
