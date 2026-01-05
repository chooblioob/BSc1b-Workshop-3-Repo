#include "Monster.h"
Monster::Monster() 
{
	this->name = "Unidentified Monster Name";
	this->type = "Undefined Type";
	this->health = 100;
	this->attackStat = 55;
}

Monster::Monster(string nName, string nType, int nAttackStat)
{
	this->name = nName;
	this->type = nType;
	this->health = 100;
	this->attackStat = nAttackStat;
}

string Monster::getName() {
	return this->name;
}

string Monster::getType() {
	return this->type;
}

int Monster::getHealth() {
	return this->health;
}

int Monster::getAttackStat() {
	return this->attackStat;
}

void Monster::getDamage(int inflictedDamage) {

}