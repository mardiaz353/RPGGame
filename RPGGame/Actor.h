#pragma once
class Actor
{
public:
	Actor();
	~Actor();
	Movement move;
	Position pos;
	Stats stats;
	vector<Action> actionList;
	Inventory inventory;
	string type;
	Time time;
};

