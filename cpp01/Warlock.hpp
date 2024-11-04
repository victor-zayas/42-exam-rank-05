
#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock {

    private:
        
        std::string _name;
        std::string _title;
        std::map < std::string, ASpell *> _SpellBook;

        Warlock();
        Warlock(const Warlock &copy);
        Warlock &operator=(const Warlock &other);

    public:

        Warlock(std::string name, std::string title);
        ~Warlock();

        std::string const &getName() const;
        std::string const &getTitle() const;

        void    setTitle(std::string title);
        void   introduce() const;

        void learnSpell(ASpell  *spell);
        void forgetSpell(std::string SpellName);
		void launchSpell(std::string SpellName, const ATarget &target);
};
