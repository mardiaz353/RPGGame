#include "stdafx.h"
#include "Movement.h"


Movement::Movement()
{

}

bool Movement::checkAction(Actor &self) {
	Position temp;
	self.pos.tryMove(temp);
}

Time Movement::performAction(Actor &self) {

}

Movement::~Movement()
{
}
