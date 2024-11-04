
#include <iostream>

class Warlock {

    private:

        Warlock();
        Warlock(const Warlock &copy);
        Warlock &operator=(const Warlock &other);
    
        std::string _name;
        std::string _title;

    public:
        Warlock(std::string name, std::string title);
        ~Warlock();

        std::string const &getName() const;
        std::string const &getTitle() const;

        void    setTitle(std::string title);
        void   introduce() const;
};
