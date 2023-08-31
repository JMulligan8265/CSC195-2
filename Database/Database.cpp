#include "Database.h";
#include "Players.h";
#include "Enemies.h";
#include <iostream>;
#include <ostream>
#include <istream>
#include <fstream>
using namespace std;

Database::Database::~Database() {
	RemoveAll();
}
void Database::Database::Add(Characters::Characters::eType type) {
	unique_ptr<Character> character = Create(static_cast<Character::eType>(type));
	cin >> *character;
	m_objects.push_back(move(character));
}
void Database::Database::DisplayAll() {
	for (auto& character : m_objects) {
		cout << *character;
	}
}
void Database::Database::Display(const int& id) {
	for (auto& character : m_objects) {
		if (character->GetId() == id) {
			cout << *character;
		}
	}
}
void Database::Database::Display(Character::eType type) {
	for (auto& character : m_objects) {
		if (character->GetType() == type) {
			cout << *character;
		}
	}
}

unique_ptr<Character> Database::Database::Create(Character::eType type) {
	Character* character = nullptr;
	switch (type)
	{
	case Character::eType::PLAYER:
		character = new Players::Players;
		break;
	case Character::eType::ENEMY:
		character = new Enemies::Enemies;
		break;
	default:
		break;
	}
	return unique_ptr<Character>{character};

}

void Database::Database::RemoveAll() {
	m_objects.clear();
}

void Database::Database::Load(const string& filename) {
	ifstream input(filename + ".txt");
	if (input.is_open()) {
		RemoveAll();
		while (!input.eof()) {
			int type;
			input >> type;

			unique_ptr<Character> character = Create(static_cast<Character::eType>(type));
			input >> *character;
			m_objects.push_back(move(character));
		}
		input.close();
	}
}
void Database::Database::Save(const string& filename) {
	ofstream output(filename + ".txt");
	int i = 0;
	if (output.is_open()) {
		for (auto& character : m_objects) {
			output << (int) character->GetType() << endl;
			output << *character;
			if (i < m_objects.size() - 1) {
				output << endl;
			}
			i++;
		}
		output.close();
	}
}

void Database::Database::Remove(const int& id) {
	for (auto iter = m_objects.begin(); iter != m_objects.end();) {
		iter = find(iter, m_objects.end(), id);
		if (iter != m_objects.end()) {
			iter = m_objects.erase(iter);
		}
	}
}
void Database::Database::Remove(Character::eType type) {
	for (auto iter = m_objects.begin(); iter != m_objects.end();) {
		iter = find(iter, m_objects.end(), type);
		if (iter != m_objects.end()) {
			iter = m_objects.erase(iter);
		}
	}
}