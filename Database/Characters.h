#pragma once
#include <ostream>
#include <istream>
#include <string>

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
			virtual eType GetType() = 0;
			
			
		private:
			unsigned int id;
			static unsigned int nextId;
			string name;
			unsigned int HP;
			int strength;
			int defense;
			int magic;
			int magic_defense;
			int speed;
			unsigned short level;

			void setId();
		

	};
}