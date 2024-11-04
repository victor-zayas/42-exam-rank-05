
#pragma once
#include "ASpell.hpp"

class   Dummy: public ATarget {
    public:
        Dummy();
		~Dummy();
		ATarget  *clone() const;
};