#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include <iostream>
#include <string>
#include "Warrior.h"
#include "MagicalEntity.h"

using namespace std;

class SpellBlade: public Warrior, public MagicalEntity{
	public:
		SpellBlade(string hName, int h, int bP, int aR, int mP, int sB);
		~SpellBlade();
		int calculateHybridDamage() const;

};




#endif