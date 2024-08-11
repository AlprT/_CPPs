
#include "Fixed.hpp"

Fixed::Fixed() : m_val(0) 
{}

Fixed::Fixed(const int val) : m_val(val << m_frac) 
{}

Fixed::Fixed(const float val) : m_val(roundf(val * (1 << m_frac))) 
{}

Fixed::Fixed(const Fixed &other) { *this = other; }

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &other) {
    if (this != &other)
        m_val = other.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const { return m_val; }

void Fixed::setRawBits(int const raw) { m_val = raw; }

float Fixed::toFloat(void) const { return (float)m_val / (1 << m_frac); }

int Fixed::toInt(void) const { return m_val >> m_frac; }

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed fixed) const { return this->toFloat() > fixed.toFloat(); }

bool Fixed::operator<(const Fixed fixed) const { return this->toFloat() < fixed.toFloat(); }

bool Fixed::operator>=(const Fixed fixed) const { return this->toFloat() >= fixed.toFloat(); }

bool Fixed::operator<=(const Fixed fixed) const { return this->toFloat() <= fixed.toFloat(); }

bool Fixed::operator==(const Fixed fixed) const { return this->toFloat() == fixed.toFloat(); }

bool Fixed::operator!=(const Fixed fixed) const { return this->toFloat() != fixed.toFloat(); }

float Fixed::operator+(const Fixed fixed) const { return this->toFloat() + fixed.toFloat(); }

float Fixed::operator-(const Fixed fixed) const { return this->toFloat() - fixed.toFloat(); }

float Fixed::operator*(const Fixed fixed) const { return this->toFloat() * fixed.toFloat(); }

float Fixed::operator/(const Fixed fixed) const { return this->toFloat() / fixed.toFloat(); }

Fixed Fixed::operator++() { this -> m_val++; return *this; }

Fixed Fixed::operator--() { this -> m_val--; return *this; }

Fixed Fixed::operator++(int) { Fixed tmp(*this); ++this -> m_val; return tmp; }

Fixed Fixed::operator--(int) { Fixed tmp(*this); --this -> m_val; return tmp; }

Fixed &Fixed::min(Fixed &a, Fixed &b) { return a < b ? a : b; }

Fixed &Fixed::max(Fixed &a, Fixed &b) { return a > b ? a : b; }

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) { return a < b ? a : b; }

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) { return a > b ? a : b; }


