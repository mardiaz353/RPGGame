#pragma once
class Attack
{
public:
	Attack();
	~Attack();
	double manaCost;
	double damage;
	vector<Position> attackRange;
	bool pierce;


};

