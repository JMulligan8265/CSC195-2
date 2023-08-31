#include "Enemies.h"

void Enemies::Enemies::Read(std::ostream& ostream, std::istream& istream) {
	Characters::Read(ostream, istream);
	ostream << "\nencounter chance: ";
	istream >> encounter_chance;

	ostream << "\nlower level range: ";
	istream >> level_range[0];
	ostream << "\higher level range: ";
	istream >> level_range[1];
	
}
void Enemies::Enemies::Write(std::ostream& ostream) {
	Characters::Write(ostream);

	ostream << "\nencounter chance: " << encounter_chance;
	ostream << "\nlower level range: " << level_range[0];
	ostream << "\nhigher level range: " << level_range[1];
	ostream << "\n--------\n";
}
Enemies::Enemies::eType Enemies::Enemies::GetType() {
	return eType::ENEMY;
}

void Enemies::Enemies::Read(ifstream& istream) {
	Characters::Read(istream);
	istream >> encounter_chance;
	istream >> level_range[0];
	istream >> level_range[1];
}

void Enemies::Enemies::Write(ofstream& ostream) {
	Characters::Write(ostream);
	ostream << encounter_chance << endl;
	ostream << level_range[0] << endl;
	ostream << level_range[1];
}