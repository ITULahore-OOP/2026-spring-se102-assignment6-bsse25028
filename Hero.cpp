#include "Hero.h"

Hero::Hero(string hName, int h, int bP){
	heroName = hName;							//initializing name
	health = h;									//initializing health
	basePower = bP;								//initializing base power

}

Hero::~Hero(){										//destructor for the class Hero
	cout << "Hero destructor called!" << endl;		//display message for the destructor

}

string Hero::getName() const{						//getter function for the hero's name
	return heroName;								//so we return heroName

}

int Hero::getHealth() const{						//getter function for hero's health
	return health;									//so we return health

}

int Hero::getPower() const{							//getter function for the base power
	return basePower;								//so we return basePower

}

void Hero::takeDamage(int damage){
	if(health > damage){							//if health is greater than damage
		health -= damage;							//we subtract the damage value from the hero's health
	}
	else{
		health = 0;									//else we set the health to 0 to avoid negative values
	}

}

bool Hero::operator>(const Hero &other) const{
	if(basePower > other.basePower){				//comparing two Hero class objects based on their power level
		return true;								//return true if this hero's power is greter than the other heo's
	}
	else{
		return false;								//else return false
	}

}

int Hero::operator+(const Hero &other) const{
	int combinedHealth = health + other.health;		//adding health of two hero class objects together
	return combinedHealth;							//return the sum

}