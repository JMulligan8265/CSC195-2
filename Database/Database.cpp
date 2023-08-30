#include "Database.h";
#include "Players.h";
#include "Enemies.h";
#include <iostream>;
using namespace std;

Database::Database::~Database() {
	for (int i = 0; i < m_objects.size(); i++) {
		delete m_objects[i];
	}
}
void Database::Database::Create(Characters::Characters::eType type) {
	Character* character = nullptr;
	switch (type) {
	case Character::eType::PLAYER:
		character = new Players::Players;
		break;
	case Character::eType::ENEMY:
		character = new Enemies::Enemies;
		break;
	}
	character->Read(cout, cin);
	m_objects.push_back(character);
}
void Database::Database::DisplayAll() {
	int size = m_objects.size();
	for (int i = 0; i < m_objects.size(); i++) {
		m_objects[i]->Write(cout);
	}
}
void Database::Database::Display(const int& id) {
	for (Character* object : m_objects) {
		if (object->GetId() == id) {
			object->Write(cout);
		}
	}
}
void Database::Database::Display(Character::eType type) {
	for (Character* object : m_objects) {
		if (object->GetType() == type) {
			object->Write(cout);
		}
	}
}