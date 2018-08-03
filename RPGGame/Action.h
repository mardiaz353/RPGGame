#pragma once
#include "Grid.h"
class Action
{
public:
	Action();
	~Action();
	string name;
	string description;
	bool checkAction(Actor &self);
	Time performAction(Actor &self);
	Time tryAction(Actor &self);
};

