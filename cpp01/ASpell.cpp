#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string name, std::string effect): _name(name), _effect(effect) {}

ASpell::ASpell(const ASpell &copy) {
    *this = copy;
}

ASpell  &ASpell::operator=(const ASpell &other) {
    this->_name = other._name;
    this->_effect = other._effect;

    return *this;
}

ASpell::~ASpell() {}

std::string ASpell::getName() const{
    return this->_name;
}

std::string ASpell::getEffect() const{
    return this->_effect;
}

void    ASpell::launch(const ATarget &target) const {
    target.getHitBySpell(*this);
}