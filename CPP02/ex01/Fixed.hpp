#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

using std::cout;
using std::endl;

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"


class Fixed
{
    private:
        int m_val;
        static const int m_frac = 8;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed(const int val);
        Fixed(const float val);
        ~Fixed();
        Fixed &operator=(const Fixed &fixed);

        float toFloat(void) const;
        int toInt(void) const;

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
