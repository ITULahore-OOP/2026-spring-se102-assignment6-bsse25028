#include "Guild.h"


Guild::Guild(string gName){							//constructor for the class Guild
	guildName = gName;								//storing the guild name in the member variable
	memberCount = 0;								//initializing the memberCount to 0
	for(int i = 0; i < 15; i++){					//initializing the roster array to nullptr
		roster[i] = nullptr;
	}

}

Guild::~Guild(){									//Guild destructor runs when the Guild object is destroyed
	for(int i = 0; i < memberCount; i++){
		roster[i] = nullptr;						//setting the pointer to nullptr so the hero objects exist elsewhere in the program
	}
	cout << "The guild " << guildName << " has been disbanded!" << endl;		//destructor display message

}

int Guild::calculateTotalGuildPower(){
	int totalGuildPower = 0;											//starting the totaal power with 0
	for(int i = 0; i < memberCount; i++){								//going through each member
		totalGuildPower += roster[i]->getPower();						//adding their power to the total, using an arrow because roster[i] a pointer
	}
	return totalGuildPower;

}

void Guild::displayGuildStatus(){
	cout << "Guild Name: " << guildName << endl;								//displaying the guild's name
	cout << "Total Members: " << memberCount << "/15" << endl;					//displaying the total guild members out of 15
	cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;		//displaying the Guild's power by calling the function calculateTotalGuildPower()

}

void Guild::operator+=(Hero* newCharacter){
	if(memberCount < 15){												//checking if there is room for more members
        roster[memberCount] = newCharacter;								//storing the pointer to the next available spot in the array
		memberCount++;													//increasing the member count by 1
	}
	else{
		cout << "Guild is at full capacity!" << endl;					//else the guild is full so we display the error message
	}

}

ostream& operator<<(ostream& os, const Guild& g){
	os << "Guild: " << g.guildName << endl;								//displayguild's name
	os << "Members: " << g.memberCount << endl;							//display the number of members
	os << "Members info:" << endl;
	if(g.memberCount == 0){												//if the number of members is 0, we display the error message
		cout << "No Guild Members!" << endl;
	}
	else{
		for(int i = 0; i < g.memberCount; i++){							//else we loop through each member and display their name and power
			os << "- " << g.roster[i]->getName() << " (Power: " << g.roster[i]->getPower() << ")" << endl;
	 	}
	}
	return os;

}
