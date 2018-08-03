#include "stdafx.h"
#include "Position.h"


Position::Position()
{
}


void Position::rotate(Grid::DIRECTIONS to, Grid::DIRECTIONS from) {

}

void Position::rotate(int times) {

}

void Position::rotate() {

}

bool Position::tryMove(Position offset) {
	Position newPos = *this + offset;
	if (newPos.isInBounds()) {
		*this = newPos;
		return true;
	}
	return false;
}

Position Position::operator+(Position &offset) {
	Position result;
	result.x = x + offset.x;
	result.y = y + offset.y;
	return result;
}

Position Position::move(Position start, Position offset) {
	return start + offset;
}

bool Position::isInBounds() {
	return isXInBounds() && isYInBounds();
}

bool Position::isXInBounds() {
	return x < Grid::height && x >= 0;
}

bool Position::isYInBounds() {
	return y < Grid::width && y >= 0;
}

Position Position::operator=(Position &pos) {
	x = pos.x;
	y = pos.y;
	return *this;
}

Position::~Position()
{
}
