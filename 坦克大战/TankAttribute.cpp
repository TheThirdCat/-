#include "TankAttribute.h"
#include"Public.h"
TankAttribute::TankAttribute(int attack, double defend, uint health, double speed,uint level)
{
	this->attack = attack;
	this->defend = defend;
	this->health = health;
	this->speed = speed;
	this->level = level;
}

int TankAttribute::levelup(double multi=1)
{
	attack = attack + Public::getLevelSpace() * 10 * multi;
	defend = defend + Public::getLevelSpace() * 10 * multi;
	health = health + Public::getLevelSpace() * 100 * multi;
	speed = speed + Public::getLevelSpace() * 1 * multi;
	level++;
	return 0;
}
