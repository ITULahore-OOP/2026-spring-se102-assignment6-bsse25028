#ifndef KNIGTH_H
#define KNIGHT_H

#include <iostream>
#include <string>
#include "Warrior.h"

using namespace std;

class Knight: public Warrior{
	private:
		int chargeBonus;
	public:
		Knight(string hName, int h, int bP, int aR, int cB);
		int getChargeBonus();
		int calculateBurstDamage() const;
		~Knight();

};



#endif