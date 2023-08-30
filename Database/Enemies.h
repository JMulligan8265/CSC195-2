#pragma once
#include "Characters.h"
#include <array>

namespace Enemies {
	class Enemies : public Characters::Characters {
		public:
			void Read(std::ostream& ostream, std::istream& istream) override;
			void Write(std::ostream& ostream) override;
			eType GetType() override;
		private:
			float encounter_chance;
			unsigned int level_range[2];

	};
}