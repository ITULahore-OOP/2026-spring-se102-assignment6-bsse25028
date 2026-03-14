#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
#include <iostream>
#include <string>

using namespace std;

class MagicalEntity{
	private:
		int manaPool;
		int spellBound;
	public:
		MagicalEntity(int mP, int sB);
		~MagicalEntity();
		int getMana() const;
		int getSpellBound() const;

};



#endif