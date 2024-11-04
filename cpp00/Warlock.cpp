#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(std::string name, std::string title): _name(name), _title(title) {
    std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const &copy) {
    *this = copy;
}

Warlock    &Warlock::operator=(Warlock const &other) {
    this->_name = other._name;
    this->_title = other._title;

    return *this;
}

Warlock::~Warlock() {
    std::cout << this->_name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const {
    return this->_name;

}
std::string const &Warlock::getTitle() const {
    return this->_title;
}

void    Warlock::setTitle(std::string title) {
    this->_title = title;
}

void    Warlock::introduce() const {
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}
