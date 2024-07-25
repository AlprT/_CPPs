#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

using std::string;

class Zombie {
private:
    string m_name;
public:
    Zombie(string name);
    ~Zombie(void);
    void announce( void );
};

#endif
