#pragma once

#include <iostream>

#include "ATarget.hpp"

class ATarget;

class ASpell
{
    private:
        std::string _name;
        std::string _effect;


    public:
        ASpell();
        ASpell(std::string name, std::string effect);
        ASpell(ASpell const &copy);
        ASpell &operator=(ASpell const &other);
        virtual ~ASpell();

        std::string const getName() const;
        std::string const getEffect() const;

        virtual ASpell *clone() const = 0;

        void launch(ATarget const &target) const;
};


