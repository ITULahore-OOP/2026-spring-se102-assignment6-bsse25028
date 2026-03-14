#include "Knight.h"

//Knight class inherits from the class Hero
//we pass the data to the knight class then set the knight specific data
Knight::Knight(string hName, int h, int bP, int aR, int cB): Warrior(hName, h, bP, aR){
	chargeBonus = cB;												//initializing charge bonus

}

int Knight::getChargeBonus(){										//getter function for charge bonus
	return chargeBonus;												//so we return chargeBonus

}

int Knight::calculateBurstDamage() const{

	int base_power = getPower();									//attaining base power from the Hero class
	int burstDamage = base_power + chargeBonus;						//applying the formula: Burst Damage = Base Power + Charge Bonus
	return burstDamage;												//return the computed value

}

Knight::~Knight(){													//destructor for the class Knight
	cout << "Knight destructor called!" << endl;					//display message for the destructor

}
