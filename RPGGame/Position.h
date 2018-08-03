#pragma once
class Position
{
public:
	Position();
	~Position();
	int x, y;

	Position(int x, int y) {
		this->x = x;
		this->y = y;
	}

	bool tryMove(Position offset);
	static Position move(Position start, Position offset);
	Position operator+(Position &offset);
	Position operator=(Position &pos);
	bool isInBounds();
	bool isXInBounds();
	bool isYInBounds();
	void rotate(Grid::DIRECTIONS to, Grid::DIRECTIONS from = UP);
};

