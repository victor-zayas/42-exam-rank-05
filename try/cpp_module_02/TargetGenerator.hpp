
#include <iostream>
#include <map>

#include "ATarget.hpp"

class TargetGenerator {
    private:
        std::map<std::string, ATarget*> _TargetGenerator;

        TargetGenerator(TargetGenerator const &copy);
        TargetGenerator&operator=(TargetGenerator const &other);

    public:
        TargetGenerator();
        ~TargetGenerator();

        void    learnTargetType(ATarget *target);
        void    forgetTargetType(std::string const &target);
        ATarget    *createTarget(std::string const &target);
};