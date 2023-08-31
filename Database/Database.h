#pragma once
#include "Characters.h"
#include "Players.h"
#include "Enemies.h"
#include <list>
#include <memory>
using namespace std;
using Character = Characters::Characters;

namespace Database {
	class Database {
	public:
		~Database();
		void Add(Characters::Characters::eType characters);
		void DisplayAll();
		void Display(const int& id);
		void Display(Character::eType type);
		void Load(const string& filename);
		void Save(const string& filename);
		unique_ptr<Character> Create(Character::eType type);
		void RemoveAll();
		list<unique_ptr<Character>> m_objects;
		void Remove(const int& id);
		void Remove(Character::eType type);
		
	};
}