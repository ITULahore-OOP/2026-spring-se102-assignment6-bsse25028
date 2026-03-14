#include <iostream>
#include <string>
#include "Guild.h"
#include "Hero.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "SpellBlade.h"
#include "Warrior.h"

using namespace std;

int main(){

    cout << "---------- Hero ----------" << endl;
    Hero hero1("Arwin", 100, 50);													//creating hero object
    Hero hero2("Edger", 80, 70);													//creating hero object
    cout << "Combined Vitality: " << (hero1 + hero2) << endl;						//calculating and displaying combined vitality for both heros
    cout << endl;

    cout << "---------- Hero Damage ----------" << endl;
    cout << hero1.getName() << " health before: " << hero1.getHealth() << endl;					//displaying the value before damage
    hero1.takeDamage(30);																		//using the damage function
    cout << hero1.getName() << " health after 30 damage: " << hero1.getHealth() << endl;		//displaying the value after damage
    hero1.takeDamage(200);
    cout << hero1.getName() << " health after 200 damage: " << hero1.getHealth() << endl;
    cout << endl;

    cout << "---------- Warrior ----------" << endl;
    Warrior warrior1("Teaha", 100, 40, 10);											//creating a warrior object
    cout << "Warrior Name: " << warrior1.getName() << endl;							//displaying the warrior's name
    cout << "Effective Health: " << warrior1.calculateEffectiveHealth() << endl;	//calculating and displaying effective health
    cout << endl;

    cout << "---------- Knight ----------" << endl;
    Knight knight1("Sir Victor", 150, 60, 20, 25);									//creating a knight object
    cout << "Knight Name: " << knight1.getName() << endl;							//displaying the knight's name
    cout << "Burst Damage: " << knight1.calculateBurstDamage() << endl;				//calculating and displaying burst damage
    cout << endl;

    cout << "---------- SpellBlade ----------" << endl;
    SpellBlade spellblade1("Espoir", 90, 45, 12, 100, 30);							//creating spellblade object
    cout << "Spellblade Name: " << spellblade1.getName() << endl;					//displaying the spellblade's name
    cout << "Hybrid Damage: " << spellblade1.calculateHybridDamage() << endl;		//calculating and displaying hybrid damage
    cout << endl;

    cout << "---------- Guild Evil ----------" << endl;
    Guild meGuild("Evil");															//creating guild object
    meGuild += &hero1;																//adding hero to the guild
    meGuild += &warrior1;															//adding warrior to the guild
    meGuild += &knight1;															//adding knight to the guild
    meGuild += &spellblade1;														//adding spellblade to the guild

    meGuild.displayGuildStatus();													//displaying the guild's status
    cout << meGuild;
    cout << endl;

return 0;
}

