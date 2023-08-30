#include "Players.h";

void Players::Players::Read(std::ostream& ostream, std::istream& istream) {
	Characters::Read(ostream, istream);
	ostream << "\nclass title: ";
	istream >> class_title;
	
	ostream << "\nweapon: ";
	istream >> weapon;

	ostream << "\narmor: ";
	istream >> armor;

	
}
void Players::Players::Write(std::ostream& ostream) {
	Characters::Write(ostream);

	ostream << "\nclass title: " << class_title;
	ostream << "\nweapon: " << weapon;
	ostream << "\narmor: " << armor;
	ostream << "\n--------\n";
}
Players::Players::eType Players::Players::GetType() {
	return eType::PLAYER;
}