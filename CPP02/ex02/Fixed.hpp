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
        bool operator>(const Fixed fixed) const;
        bool operator<(const Fixed fixed) const;
        bool operator>=(const Fixed fixed) const;
        bool operator<=(const Fixed fixed) const;
        bool operator==(const Fixed fixed) const;
        bool operator!=(const Fixed fixed) const;

        float operator+(const Fixed fixed) const;
        float operator-(const Fixed fixed) const;
        float operator*(const Fixed fixed) const;
        float operator/(const Fixed fixed) const;

        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        float toFloat(void) const;
        int toInt(void) const;

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
