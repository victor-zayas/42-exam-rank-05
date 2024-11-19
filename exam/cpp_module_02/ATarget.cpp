#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string type): _type(type) {}

ATarget::ATarget(ATarget const &copy) {
    *this = copy;
}

ATarget &ATarget::operator=(ATarget const &other) {
    _type = other._type;

    return *this;
}

ATarget::~ATarget() {}

std::string const ATarget::getType() const {
    return _type;
}

void    ATarget::getHitBySpell(ASpell const &spell) const {
    // <TYPE> has been <EFFECTS>!
    std::cout << _type << " has been " << spell.getEffect() << "!" << std::endl;
}