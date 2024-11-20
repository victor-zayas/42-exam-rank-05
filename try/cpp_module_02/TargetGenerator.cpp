
#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::TargetGenerator(TargetGenerator const &copy) {
    *this = copy;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &other) {
    _TargetGenerator = other._TargetGenerator;

    return *this;
}

TargetGenerator::~TargetGenerator() {}

void    TargetGenerator::learnTargetType(ATarget *target) {
    if (target)
        _TargetGenerator[target->getType()] = target;
}

void    TargetGenerator::forgetTargetType(std::string const &target) {
    if (_TargetGenerator.find(target) != _TargetGenerator.end())
        _TargetGenerator.erase(_TargetGenerator.find(target));
}

ATarget    *TargetGenerator::createTarget(std::string const &target) {
    ATarget *tmp = NULL;

    if (_TargetGenerator.find(target) != _TargetGenerator.end())
        tmp = _TargetGenerator[target];
    return tmp;
}
