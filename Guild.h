#ifndef GUILD_H
#define GUILD_H
#include <iostream>
#include <string>
#include "Hero.h"

using namespace std;

class Guild{
	private:
		string guildName;
		Hero* roster[15];
		int memberCount;
	public:
		Guild(string gName);
		~Guild();
		int calculateTotalGuildPower();
		void displayGuildStatus();
		void operator += (Hero* newCharacter);
		friend ostream& operator << (ostream& os, const Guild& g);

};


#endif