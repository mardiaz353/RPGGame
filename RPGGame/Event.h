#pragma once
#include "Grid.h"
#include "Typedefs.h"

//typedef unsigned int u32;
typedef u32 Time;
class Event
{
	Effect *effect;

public:
	Event(Time time);
	Event(Time time, u32 eventNum);
	~Event();

	void executeEvent();
};

