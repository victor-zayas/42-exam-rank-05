#include "Polymorph.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "turned int a critter") {}

Polymorph::~Polymorph() {}

ASpell *Polymorph::clone() const {
    return new Polymorph();
}