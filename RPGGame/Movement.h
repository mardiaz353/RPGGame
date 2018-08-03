#pragma once
class Movement : public Action {
public:
	bool checkAction(Actor &self);
	Time performAction(Actor &self);
};

