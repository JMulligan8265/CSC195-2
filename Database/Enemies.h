#pragma once
#include "Characters.h"
#include <array>

namespace Enemies {
	class Enemies : public Characters::Characters {
		public:
			void Read(std::ostream& ostream, std::istream& istream) override;
			void Write(std::ostream& ostream) override;
			eType GetType() override;
			void Read(ifstream& istream) override;
			void Write(ofstream& ostream) override;
		private:
			float encounter_chance;
			unsigned int level_range[2];

	};
}