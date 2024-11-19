#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string name, std::string effect): _name(name), _effect(effect) {}

ASpell::ASpell(ASpell const &copy) {
    *this = copy;
}

ASpell &ASpell::operator=(ASpell const &other) {
    _name = other._name;
    _effect = other._effect;

    return *this;
}

ASpell::~ASpell() {}

std::string const ASpell::getName() const {
    return _name;
}

std::string const ASpell::getEffect() const {
    return _effect;
}

void    ASpell::launch(ATarget const &target) const {
    target.getHitBySpell(*this);
}