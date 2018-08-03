#pragma once
#include "Grid.h"
class EventID
{
	Time time;
	u32 eventNum;

public:
	EventID();
	~EventID();

	bool operator<(const EventID &x) const {
		if (time != x.time) {
			return time < x.time;
		}
		return eventNum < x.eventNum;
	}
};

