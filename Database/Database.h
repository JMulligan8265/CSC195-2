#pragma once
#include "Characters.h"
#include "Players.h"
#include "Enemies.h"
#include <vector>
using namespace std;
using Character = Characters::Characters;

namespace Database {
	class Database {
	public:
		~Database();
		void Create(Characters::Characters::eType characters);
		void DisplayAll();
		void Display(const int& id);
		void Display(Character::eType type);
		std::vector<Character*> m_objects;
		
	};
}