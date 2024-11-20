
#pragma once

#include <iostream>

#include "ASpell.hpp"

class ASpell;

class ATarget {
    private:
        std::string _type;

    public:
        ATarget();
        ATarget(std::string type);
        ATarget(ATarget const &copy);
        ATarget&operator=(ATarget const &other);
        virtual ~ATarget();

        std::string const getType() const;

        virtual ATarget *clone() const=0;

        void    getHitBySpell(ASpell const &spell) const;
};