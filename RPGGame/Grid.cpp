#include "stdafx.h"
#include "Grid.h"


Grid::Grid()
{
	setLayout();
}


Grid::~Grid()
{
}

void Grid::gameLoop() {
	auto e = events.begin();
	while (true) {
		e->second.executeEvent();
		e = events.erase(e);
	}
}

void Grid::setLayout() {
	layout.clear();
	for (int i = 0; i < 5; i++) {
		layout.emplace_back(5);
	}
}