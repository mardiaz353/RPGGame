#pragma once
#include <vector>
#include <map>
#include "Effect.h"
#include "Event.h"
#include "EventID.h"
#include "Actor.h"
#include "Tile.h"
using namespace std;

typedef unsigned int u32;
class Grid
{
public:
	Grid();
	~Grid();
	static enum DIRECTIONS {
		UP,
		UP_RIGHT,
		RIGHT,
		DOWN_RIGHT,
		DOWN,
		DOWN_LEFT,
		LEFT,
		UP_LEFT
	};
	static int height;
	static int width;

	vector<vector<Tile>> layout;
	vector<Actor> actors;
	map<EventID, Event> events;

	void gameLoop();
	void setLayout();
};

