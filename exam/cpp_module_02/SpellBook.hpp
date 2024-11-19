#include <map>

#include "ASpell.hpp"

class SpellBook {
	private :
		std::map < std::string, ASpell*> _SpellBook;
		
        SpellBook(SpellBook const &copy);
		SpellBook&operator=(SpellBook const &other);
    
	public :
		SpellBook();
		~SpellBook();
        
		void learnSpell(ASpell*);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);
};