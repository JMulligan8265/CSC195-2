#include "Characters.h";
#include <string>
using namespace std;

unsigned int Characters::Characters::nextId = 0;

void Characters::Characters::Read(ostream& ostream, istream& istream) {
	id = nextId;
	ostream << "\nid set to: " << id;
	setId();

	ostream << "\nenter name: ";
	istream >> name;

	ostream << "\nenter HP: ";
	istream >> HP;

	ostream << "\nenter strength: ";
	istream >> strength;

	ostream << "\nenter defense: ";
	istream >> defense;

	ostream << "\nenter magic: ";
	istream >> magic;

	ostream << "\nenter magic defense: ";
	istream >> magic_defense;

	ostream << "\nenter speed: ";
	istream >> speed;

	ostream << "\nenter level: ";
	istream >> level;
}

void Characters::Characters::Write(ostream& ostream) {
	ostream << "\nId: " << id;
	ostream << "\nname: " << name;
	ostream << "\nHP: " << HP;
	ostream << "\nstrength: " << strength;
	ostream << "\ndefense: " << defense;
	ostream << "\nmagic: " << magic;
	ostream << "\nmagic defense: " << magic_defense;
	ostream << "\nspeed: " << speed;
	ostream << "\nlevel: " << level;
}
int Characters::Characters::GetId() {
	return id;
}

void Characters::Characters::setId() {
	nextId++;

}


