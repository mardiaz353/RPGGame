#pragma once
#include "Grid.h"
class Tile
{
	Actor *actorPtr;

public:
	Tile(Actor *actorPtr = nullptr);
	~Tile();
};

