#pragma once
#include "Characters.h"

namespace Players {
	class Players : public Characters::Characters {
	public:
		void Read(std::ostream& ostream, std::istream& istream) override;
		void Write(std::ostream& ostream) override;
		eType GetType() override;
		void Read(ifstream& istream) override;
		void Write(ofstream& ostream) override;
	private:
		string class_title;
		string weapon;
		string armor;
	};
}