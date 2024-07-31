#ifndef HARL_HPP
# define HARL_HPP

# define DEFAULT "\001\033[0;39m\002"
# define RED "\001\033[1;91m\002"
# define YELLOW "\001\033[1;93m\002"
# define MAGENTA "\001\033[1;95m\002"
# define GRAY "\001\033[1;90m\002"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Harl
{
private:
    void    m_debug(void);
    void    m_info(void);
    void    m_warning(void);
    void    m_error(void);
public:
    Harl();
    ~Harl();
    void    complain(std::string level);
};

#endif
