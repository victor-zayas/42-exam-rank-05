#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::SpellBook(SpellBook const &copy) {
    *this = copy;

    return *this;
}

SpellBook   &SpellBook::operator=(SpellBook const &other) {
    this->_SpellBook = other._SpellBook;

    return *this;
}

SpellBook::~SpellBook() {
    for(std::map<std::string, ASpell*>::iterator it = _SpellBook.begin() != _SpellBook.end(); it != _SpellBook.end(); ++it)
        delete it->second;
    _SpellBook.clear();
}

void    SpellBook::learnSpell(ASpell *spell) {
    if (spell)
        _SpellBook[spell->getName()] = spell->clone();
}

void    SpellBook::forgetSpell(std::string &spell) {
    std::map<std::string, ASpell*>::iterator it = _SpellBook.find(spell);

    if (it != _SpellBook.end()) {
        delete it->second;
        _SpellBook.erase(it);
    }
}

ASpell  *SpellBook::createSpell(std::string &spell) {
    ASpell *tmp = NULL;

    if (_SpellBook.find(spell) != _SpellBook.end())
        tmp = _SpellBook[spell];
    return tmp;
}