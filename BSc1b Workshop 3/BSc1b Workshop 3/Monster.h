#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Monster
{
private:
	string name  = "great unclean one";
	string type = "Grater Daemon";
	int health;
	int attackStat;
	vector<item> loot;

public: 
	Monster();
	Monster(string nName, string nType, int nAttackStat);

	string getName();
	string getType();
	int getHealth();
	int getAttackStat();
};

