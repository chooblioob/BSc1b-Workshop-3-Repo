#pragma once
#include <iostream>

using namespace std;

class Monster
{
private:
	string name  = "great unclean one";
	string type = "Grater Daemon";
	int health = 100;
	int attackStat = 55;

public: 
	Monster();
	Monster(string nName, string nType, int nAttackStat);

	string getName();
	string getType();
	int getHealth();
	int getAttackStat();
};

