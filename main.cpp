#include <iostream>
#include <string>
#include <stdlib.h>
#include "master.h"
using namespace std;

master Aisling;
master Cameria;
master Elreon;
master Gravicius;
master Guff;
master Haku;
master Hillock;
master It_That_Fled;
master Janus;
master Jorgin;
master Korell;
master Leo;
master Riker;
master Rin;
master Tora;
master Vagan;
master Vorici;

void master_check();

void department_check() {
	cout << "this option is currently not available\n";
	//string x;
	//cout << "Which department do you wanna check?\n";
	//cin >> x;
	//system("CLS");
	//cout << "checking " << x << " ..";
}

void f_call() {
	string x;
	cout << "Which function to call? 'master' or 'department'\n";
	cin >> x;
	if (x == "master") {
		system("CLS");
		master_check();
	}
	else if (x == "department") {
		system("CLS");
		department_check();
	}
	else {
		system("CLS");
		cout << "input was wrong\n";
		system("PAUSE");
		system("CLS");
		f_call();
	}
}

int main() {
	//the objects aren´t in use, because I wasn´t able to utilize them. I´ll look into it.
	/*
	master Aisling;
	Aisling.name = "Aisling";
	Aisling.dropT = "Veiled Weapons";
	Aisling.dropF = "Veiled Armour";
	Aisling.dropR = "Add Veiled Mod";
	Aisling.dropI = "Veiled Jewellery";

	master Cameria;
	Cameria.name = "Cameria";
	Cameria.dropT = "Timeworn Item";
	Cameria.dropF = "Harbinger Orbs";
	Cameria.dropR = "Sextants";
	Cameria.dropI = "Sulphite Scarab";

	master Elreon;
	Elreon.name = "Elreon";
	Elreon.dropT = "Unique Weapon";
	Elreon.dropF = "Unique Armour";
	Elreon.dropR = "Unique Jewellery";
	Elreon.dropI = "Reliquary Scarab";

	master Gravicius;
	Gravicius.name = "Gravicius";
	Gravicius.dropT = "Full Stack Div Card";
	Gravicius.dropF = "Random Div Cards";
	Gravicius.dropR = "Swap Div Cards";
	Gravicius.dropI = "Divination Scarab";

	master Guff;
	Guff.name = "Guff";
	Guff.dropT = "Craft Chaos";
	Guff.dropF = "Craft Essence";
	Guff.dropR = "Craft Annul Exalt";
	Guff.dropI = "Craft Aug Alt";

	master Haku;
	Haku.name = "Haku";
	Haku.dropT = "Random Rares";
	Haku.dropF = "Random Strongbox";
	Haku.dropR = "Quality Items";
	Haku.dropI = "Ambush Scarab";

	master Hillock;
	Hillock.name = "Hillock";
	Hillock.dropT = "Weapon Quality";
	Hillock.dropF = "Armour Quality";
	Hillock.dropR = "Flask Quality";
	Hillock.dropI = "Map Quality";

	master It_That_Fled;
	It_That_Fled.name = "It_That_Fled";
	It_That_Fled.dropT = "Breach Splinters";
	It_That_Fled.dropF = "Abyss Jewels";
	It_That_Fled.dropR = "Upgrade Breachstone";
	It_That_Fled.dropI = "Breach Scarab";

	master Janus;
	Janus.name = "Janus";
	Janus.dropT = "Quality Currency";
	Janus.dropF = "Currency Shards";
	Janus.dropR = "Perandus Coins";
	Janus.dropI = "Perandus Scarab";

	master Jorgin;
	Jorgin.name = "Jorgin";
	Jorgin.dropT = "Talismans";
	Jorgin.dropF = "Rare Aspect Item";
	Jorgin.dropR = "Talisman Upgrade";
	Jorgin.dropI = "Bestiary Scarab";

	master Korell;
	Korell.name = "Korell";
	Korell.dropT = "Essences";
	Korell.dropF = "Fragments";
	Korell.dropR = "Fossils";
	Korell.dropI = "Elder Scarab";

	master Leo;
	Leo.name = "Leo";
	Leo.dropT = "Silver Coins";
	Leo.dropF = "Currency";
	Leo.dropR = "Use Currency";
	Leo.dropI = "Torment Scarab";

	master Riker;
	Riker.name = "Riker";
	Riker.dropT = "Pick a Currency";
	Riker.dropF = "Pick a Unique";
	Riker.dropR = "Pick a Veiled Item";
	Riker.dropI = "Pick a Div Card";

	master Rin;
	Rin.name = "Rin";
	Rin.dropT = "White Maps";
	Rin.dropF = "Rare Maps";
	Rin.dropR = "Unique Map";
	Rin.dropI = "Cartography Scarab";

	master Tora;
	Tora.name = "Tora";
	Tora.dropT = "Pick a Random Item";
	Tora.dropF = "Enchanted Item";
	Tora.dropR = "Gem XP";
	Tora.dropI = "Harbinger Scarab";

	master Vagan;
	Vagan.name = "Vagan";
	Vagan.dropT = "Rare Weapons";
	Vagan.dropF = "Rare Armour";
	Vagan.dropR = "Rare Jewellery";
	Vagan.dropI = "Rare Jewels";

	master Vorici;
	Vorici.name = "Vorici";
	Vorici.dropT = "Quality Gems";
	Vorici.dropF = "Socket Currency";
	Vorici.dropR = "White Sockets";
	Vorici.dropI = "Shaper Scarab";
	*/

	// array with the 4 departments of the syndicate. not used atm.
	//string department[4] = { "Transportation", "Fortification", "Research", "Intervention" };

	f_call();

	system("PAUSE");
}
void master_check() {
	string xinput;
	cout << "Which master to check?\n";
	cin >> xinput;
	system("CLS");
	if (xinput == "Aisling") {
		cout << "Master: " << "Aisling" << "\n";
		cout << "T: " << "Veiled Weapons" << "\n";
		cout << "F: " << "Veiled Armour" << "\n";
		cout << "R: " << "Add Veiled Mod" << "\n";
		cout << "I: " << "Veiled Jewellery" << "\n\n";
		master_check();
	}
	else if (xinput == "Cameria") {
		cout << "Master: " << "Cameria" << "\n";
		cout << "T: " << "Timeworn Item" << "\n";
		cout << "F: " << "Harbinger Orbs" << "\n";
		cout << "R: " << "Sextants" << "\n";
		cout << "I: " << "Sulphite Scarab" << "\n\n";
		master_check();
	}
	else if (xinput == "Elreon") {
		cout << "Master: " << "Elreon" << "\n";
		cout << "T: " << "Unique Weapon" << "\n";
		cout << "F: " << "Unique Armour" << "\n";
		cout << "R: " << "Unique Jewellery" << "\n";
		cout << "I: " << "Reliquary Scarab" << "\n\n";
		master_check();
	}
	else if (xinput == "Gravicius") {
		cout << "Master: " << "Gravicius" << "\n";
		cout << "T: " << "Full Stack Div Card" << "\n";
		cout << "F: " << "Random Div Cards" << "\n";
		cout << "R: " << "Swap Div Cards" << "\n";
		cout << "I: " << "Divination Scarab" << "\n\n";
		master_check();
	}
	else if (xinput == "Guff") {
		cout << "Master: " << "Guff" << "\n";
		cout << "T: " << "Craft Chaos" << "\n";
		cout << "F: " << "Craft Essence" << "\n";
		cout << "R: " << "Craft Annul Exalt" << "\n";
		cout << "I: " << "Craft Aug Alt" << "\n\n";
		master_check();
	}
	else if (xinput == "Haku") {
		cout << "Master: " << "Haku" << "\n";
		cout << "T: " << "Random Rares" << "\n";
		cout << "F: " << "Random Strongbox" << "\n";
		cout << "R: " << "Quality Items" << "\n";
		cout << "I: " << "Ambush Scarab" << "\n\n";
		master_check();
	}
	else if (xinput == "Hillock") {
		cout << "Master: " << "Hillock" << "\n";
		cout << "T: " << "Weapon Quality" << "\n";
		cout << "F: " << "Armour Quality" << "\n";
		cout << "R: " << "Flask Quality" << "\n";
		cout << "I: " << "Map Quality" << "\n\n";
		master_check();
	}
	else if (xinput == "It_That_Fled") {
		cout << "Master: " << "It_That_Fled" << "\n";
		cout << "T: " << "Breach Splinters" << "\n";
		cout << "F: " << "Abyss Jewels" << "\n";
		cout << "R: " << "Upgrade Breachstone" << "\n";
		cout << "I: " << "Breach Scarab" << "\n\n";
		master_check();
	}
	else if (xinput == "Janus") {
		cout << "Master: " << "Janus" << "\n";
		cout << "T: " << "Quality Currency" << "\n";
		cout << "F: " << "Currency Shards" << "\n";
		cout << "R: " << "Perandus Coins" << "\n";
		cout << "I: " << "Perandus Scarab" << "\n\n";
		master_check();
	}
	else if (xinput == "Jorgin") {
		cout << "Master: " << "Jorgin" << "\n";
		cout << "T: " << "Talismans" << "\n";
		cout << "F: " << "Rare Aspect Item" << "\n";
		cout << "R: " << "Talisman Upgrade" << "\n";
		cout << "I: " << "Bestiary Scarab" << "\n\n";
		master_check();
	}
	else if (xinput == "Korell") {
		cout << "Master: " << "Korell" << "\n";
		cout << "T: " << "Essences" << "\n";
		cout << "F: " << "Fragments" << "\n";
		cout << "R: " << "Fossils" << "\n";
		cout << "I: " << "Elder Scarab" << "\n\n";
		master_check();
	}
	else if (xinput == "Leo") {
		cout << "Master: " << "Leo" << "\n";
		cout << "T: " << "Silver Coins" << "\n";
		cout << "F: " << "Currency" << "\n";
		cout << "R: " << "Use Currency" << "\n";
		cout << "I: " << "Torment Scarab" << "\n\n";
		master_check();
	}
	else if (xinput == "Riker") {
		cout << "Master: " << "Riker" << "\n";
		cout << "T: " << "Pick a Currency" << "\n";
		cout << "F: " << "Pick a Unique" << "\n";
		cout << "R: " << "Pick a Veiled Item" << "\n";
		cout << "I: " << "Pick a Div Card" << "\n\n";
		master_check();
	}
	else if (xinput == "Rin") {
		cout << "Master: " << "Rin" << "\n";
		cout << "T: " << "White Maps" << "\n";
		cout << "F: " << "Rare Maps" << "\n";
		cout << "R: " << "Unique Map" << "\n";
		cout << "I: " << "Cartography Scarab" << "\n\n";
		master_check();
	}
	else if (xinput == "Tora") {
		cout << "Master: " << "Tora" << "\n";
		cout << "T: " << "Pick a Random Item" << "\n";
		cout << "F: " << "Enchanted Item" << "\n";
		cout << "R: " << "Gem XP" << "\n";
		cout << "I: " << "Harbinger Scarab" << "\n\n";
		master_check();
	}
	else if (xinput == "Vagan") {
		cout << "Master: " << "Vagan" << "\n";
		cout << "T: " << "Rare Weapons" << "\n";
		cout << "F: " << "Rare Armour" << "\n";
		cout << "R: " << "Rare Jewellery" << "\n";
		cout << "I: " << "Rare Jewels" << "\n\n";
		master_check();
	}
	else if (xinput == Vorici.name) {
		cout << "Master: " << "Vorici" << "\n";
		cout << "T: " << "Quality Gems" << "\n";
		cout << "F: " << "Socket Currency" << "\n";
		cout << "R: " << "White Sockets" << "\n";
		cout << "I: " << "Shaper Scarab" << "\n\n";
		master_check();
	}
	else {
		cout << "Error. The input in this programm is still case-sensitive at the moment, please type \nthe masters name with the first character capitalized\n\n";
		master_check();
	}
}