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

int TankAttribute::levelup(double multi)
{
	this->attack = this->attack + Public::getLevelSpace() * 10 * multi;
	this->defend = this->defend + Public::getLevelSpace() * 10 * multi;
	this->health = this->health + Public::getLevelSpace() * 100 * multi;
	this->speed = this->speed + Public::getLevelSpace() * 1 * multi;
	this->level++;
	return 0;
}
void TankAttribute::move() {

}
