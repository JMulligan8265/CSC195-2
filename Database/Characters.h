#pragma once
#include <ostream>
#include <istream>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

namespace Characters {
	class Characters {
		public:
			enum class eType {
				PLAYER,
				ENEMY
			};
			virtual void Read(ostream& ostream, istream& istream);
			virtual void Write(ostream& ostream);
			int GetId();
			void setnextId(int id);
			virtual eType GetType() = 0;
			virtual void Read(ifstream& istream);
			virtual void Write(ofstream& ostream);
			void setId();
			friend istream& operator >> (istream& istream, Characters& character);
			friend ostream& operator << (ostream& ostream, Characters& character);

			friend ifstream& operator >> (ifstream& istream, Characters& character);
			friend ofstream& operator << (ofstream& ostream, Characters& character);

			friend bool operator == (const unique_ptr<Characters>& character, const int& id);
			friend bool operator == (const unique_ptr<Characters>& character, eType type);

			
			
		private:
			unsigned int id = 0;
			static unsigned int nextId;
			string name;
			unsigned int HP;
			int strength;
			int defense;
			int magic;
			int magic_defense;
			int speed;
			unsigned short level;

			
		

	};
}