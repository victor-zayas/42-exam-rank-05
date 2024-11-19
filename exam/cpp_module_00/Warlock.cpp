#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(std::string name, std::string title): _name(name), _title(title) {
    // <NAME>: This looks like another boring day.
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const &copy) {
    *this = copy;
}

Warlock &Warlock::operator=(Warlock const &other) {
    _name = other._name;
    _title = other._title;

    return *this;
}

Warlock::~Warlock() {
    // <NAME>: My job here is done!
    std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const Warlock::getName() const {
    return _name;
}

std::string const Warlock::getTitle() const {
    return _title;
}

void    Warlock::setTitle(std::string const title) {
    _title = title;
}

void    Warlock::introduce() const{
    // <NAME>: I am <NAME>, <TITLE>!
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}
