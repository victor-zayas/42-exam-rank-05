
#pragma once
#include <iostream>
#include "ASpell.cpp"

class ASpell;

class ATarget {
    private:
        std::string _type;

    public:
        ATarget();
        ATarget(std::string type);
        ATarget(const ATarget &copy);
        ATarget&operator=(const ATarget &copy);
        virtual ~ATarget();

        std::string getType() const;

        virtual ATarget* clone() const = 0;

        void    getHitBySpell(const ASpell &spell) const;
};