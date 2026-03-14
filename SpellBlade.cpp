#include "SpellBlade.h"

//SpellBlade class constructor passes data to both Warrior and MagicalEntity base classes
SpellBlade::SpellBlade(string hName, int h, int bP, int aR, int mP, int sB):Warrior(hName, h, bP, aR), MagicalEntity(mP, sB){
	//all the member variables are handled by te parent class constuctors
}

SpellBlade::~SpellBlade(){											//destructor for the class SpellBlade()
	cout << "SpellBlade destructor called!" << endl;				//display message for the destructor

}

int SpellBlade::calculateHybridDamage() const{
	int base_power = getPower();									//attaining base power from the Hero class
	int spell_power = getSpellBound();								//attaining spell power from the MagicalEntity class
	int hybidDamage = base_power + spell_power;						//applying the formula: Hybrid Damage = Base Power + Spell Power
	return hybidDamage;												//return the computed value

}