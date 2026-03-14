#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include <string>
#include "Hero.h"


using namespace std;

class Warrior:public Hero{
	private:
		int armorRating;
	public:
		Warrior(string hName, int h, int bP, int aR);
		~Warrior();
		int getArmor() const;
		int calculateEffectiveHealth() const;

};



#endif