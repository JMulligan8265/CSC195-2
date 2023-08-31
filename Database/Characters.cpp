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
	nextId = id + 1;

}

void Characters::Characters::Read(ifstream& istream) {
	istream >> id;
	setId();

	istream >> name;

	istream >> HP;

	istream >> strength;

	istream >> defense;

	istream >> magic;

	istream >> magic_defense;

	istream >> speed;

	istream >> level;
}

void Characters::Characters::Write(ofstream& ostream) {
	ostream << id << endl;
	ostream << name << endl;
	ostream << HP << endl;
	ostream << strength << endl;
	ostream << defense << endl;
	ostream << magic << endl;
	ostream << magic_defense << endl;
	ostream << speed << endl;
	ostream << level << endl;
}

void Characters::Characters::setnextId(int id) {
	nextId = id;
}


namespace Characters {
	ostream& operator << (ostream& ostream, Characters& character)
	{
		character.Write(ostream);
		return ostream;
	}

	istream& operator >> (istream& istream, Characters& character) {
		character.Read(cout, istream);
		return istream;
	}

	ifstream& operator >> (ifstream& istream, Characters& character) {
		character.Read(istream);
		return istream;
	}
	ofstream& operator << (ofstream& ostream, Characters& character) {
		character.Write(ostream);
		return ostream;
	}

	bool operator == (const std::unique_ptr<Characters>& character, const int& id) {
		return character.get()->GetId() == id;
	}
	bool operator == (const std::unique_ptr<Characters>& character, Characters::eType type) {
		return character.get()->GetType() == type;
	}
}
