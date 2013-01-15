// Brandon Byrne's Text Based RPG 
// Programming Language: C++
// Classes: 4
// Version 0 (ALPHA)
// NOTE: The "Mage" class has not been implemented as of this version. Attempting to select the Mage will result
// in various bugs appearing throughout the game.
// NOTE: The Shop is plagued by a persistent bug and has been removed.
// Uploaded for my fellow /g/ents!


#include <iostream>
#include "Playerfinal.h";
#include "Goblin.h";
#include "Warrior.h";
#include "Mage.h";  // UNFINISHED
using namespace std;

int main()
{
	cout << "Please select a class!" << endl;
	cout << "1. Warrior" << endl;
	cout << "2. Mage" << endl;	// UNFINISHED
	cin >> playerClass;
	if ( playerClass == 1 )
	{
		cout << "You have selected the Warrior!" << endl;
		cout << "Stats:" << endl;
		cout << Warrior::playerXP;
		cout << Warrior::playerHP;
		cout << Warrior::playerAP;
		cout << Warrior::playerGold;
	}
	else if ( playerClass == 2 )	// UNFINISHED
	{
		cout << "You have selected the Mage!" << endl;
		cout << "Stats:" << endl;
		cout << Mage::playerXP;
		cout << Mage::playerHP;
		cout << Mage::playerAP;
		cout << Mage::playerGold;
	}
	cout << "What would you like to do?" << endl;
	cout << "1. Battle Goblins in the Forest" << endl;
	cout << "2. Shop" << endl;
	cin >> playerChoice;
	if ( playerChoice == 1 )
	{
		cout << "You enter the forest and immediately encounter a Level 1 Goblin!"
		cout << "What would you like to do?"
		cout << "1. Use a Melee Attack" << endl;
		cout << "2. Use a Spell" << endl;
		if ( playerBattle == 1 )
		{
			cout << "You swing your sword and deal" << Warrior::strength << "damage!" << endl;
			cout << "The Goblin has" << goblinHP - Warrior::strength << "health remaining." << endl;
			if ( goblinHP <= 0 )
				{
					cout << "You have slain the Goblin!" << endl;
					cout << "You receive" << addGold << "Gold." << endl;
					cout << "1. Battle another Goblin" << endl;
					cout << "2. Shop" << endl;
					cin >> playerChoice;
				}
			else
				{
					cout << "The Goblin has not perished! Strike again!" << endl;
					cout << "1. Use a Melee Attack" << endl;
					cout << "2. Use a Spell" << endl;
					cin >> playerBattle;
				}
		}
		else if ( playerBattle == 2 )
		{
			cout << "You cast a fireball and deal" << Warrior:ap << "damage!" << endl;
			cout << "The Goblin has" << goblinHP - Warrior::ap << "health remaining." << endl;
			if ( goblinHP <= 0 )
				{
					cout << "You have slain the Goblin!" << endl'
					cout << "You receive" << addGold << "Gold." << endl;
					cout << "1. Battle another Goblin" << endl;
					cout << "2. Shop" << endl;
					cin >> playerChoice;
				}
			else
				{
					cout << "The Goblin has not perished! Strike again!" << endl;
					cout << "1. Use a melee Attack" << endl;
					cout << "2. Use a Spell" << endl;
					cin >> playerBattle;
				}
		}
	if ( playerChoice == 2 )
	{
		cout << "The shop appears to be closed." << endl;
		cout << "1. Battle Goblins in the Forest" << endl;
		cout << "2. Shop" << endl;
		cin << playerChoice;
	}
}	
	
