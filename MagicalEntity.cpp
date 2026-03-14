#include "MagicalEntity.h"

MagicalEntity::MagicalEntity(int mP, int sB){					//constructor for MagicalEntity class
	manaPool = mP;												//initializing manaPool
	spellBound = sB;											//initializing spellBound

}

MagicalEntity::~MagicalEntity(){								//destructor for the class MagicalEntity
	cout << "MagiaclaEntity destructor called!" << endl;		//display message for the destructor

}

int MagicalEntity::getMana() const{					//getter function for mana
	return manaPool;								//so we return manaPool

}

int MagicalEntity::getSpellBound() const{			//getter function for spell bound
	return spellBound;								//so we return spellBound

}