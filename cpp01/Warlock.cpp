#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(std::string name, std::string title): _name(name), _title(title) {
//    <NAME>: This looks like another boring day.
    std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const &copy) {
    *this = copy;
}

Warlock     &Warlock::operator=(Warlock const &other) {
    this->_name = other._name;
    this->_title = other._title;

    return *this;
}

Warlock::~Warlock() {
    // <NAME>: My job here is done!
    std::cout << this->_name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const {
    return _name;
}

std::string const &Warlock::getTitle() const {
    return _title;
}

void Warlock::setTitle(std::string const title) {
    this->_title = title;
}

void    Warlock::introduce() const {
     // <NAME>: I am <NAME>, <TITLE>!
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << std::endl;
}

void    Warlock::learnSpell(ASpell *spell) {
    if (spell) {
        if (_SpellBook.find(spell->getName()) == _SpellBook.end())
            _SpellBook[spell->getName()] = spell->clone();
    }
}

void    Warlock::forgetSpell(std::string spell) {
    if (_SpellBook.find(spell)!= _SpellBook.end()) {
        delete _SpellBook[spell];
        _SpellBook.erase(_SpellBook.find(spell));
    }
}

void    Warlock::launchSpell(std::string spell, ATarget &target) {
    if (_SpellBook.find(spell) != _SpellBook.end())
        _SpellBook[spell]->launch(target);
}