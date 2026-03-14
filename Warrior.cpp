#include "Warrior.h"

//Warrior class inherits from the class Hero
//we pass the name, health and base power to the Hero base class
Warrior::Warrior(string hName, int h, int bP, int aR):Hero(hName, h, bP){
	armorRating = aR;											//initializing the armorRating

}

Warrior::~Warrior(){											//destructor for the class Warrior
	cout << "Warrior destructor called!" << endl;				//display message for the destructor

}

int Warrior::getArmor() const{									//getter function for the armor rating
	return armorRating;											//so we return armorRating

}

int Warrior::calculateEffectiveHealth() const{
	int healthe = getHealth();									//attaining health from the Hero class
	int effectiveHealth = healthe + (armorRating * 2);			//applying the formula: Effective Health = Health + (Armor Rating * 2)
 	return effectiveHealth;										//return the final computed value

}

