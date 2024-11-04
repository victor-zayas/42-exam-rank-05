
#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class   ASpell {
    private :
        std::string _name;
        std::string _effect;

    public:
        ASpell();
        ASpell(std::string name, std::string effect);
        ASpell(const ASpell &copy);
        ASpell&operator=(const ASpell &copy);
        virtual ~ASpell();

        std::string getName() const;
        std::string getEffect() const;

        virtual ASpell* clone() const = 0;

        void launch(const ATarget &target) const;
};
