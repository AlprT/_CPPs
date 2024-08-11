
#include "Fixed.hpp"

// Default constructor : called when an object is created
Fixed::Fixed() : m_val(0) {
    cout << GREEN << "Default constructor" << RESET << " called" << endl;
}

// Destructor : called when an object is out of scope or destroyed
Fixed::~Fixed() {
    cout << RED << "Destructor" << RESET << " called" << endl;
}

// Copy constructor : called when a new object is created from an existing object, 
//                    as a copy of the existing object (passed by reference)
Fixed::Fixed(const Fixed &other) {
    cout << GREEN << "Copy constructor" << RESET << " called" << endl;
    *this = other;
}

// Assignment operator : called when an object is assigned a new value from another object
// other  : the object to copy
// return : the object that has been assigned the new value
Fixed &Fixed::operator=(const Fixed &other) {
   cout << BLUE << "Copy assignment operator" << RESET << " called" << endl;
    if (this != &other)
        m_val = other.getRawBits();
    return *this;
}

// Get the raw value of the fixed point value
int Fixed::getRawBits(void) const {
    cout << YELLOW << "getRawBits member function" << RESET << " called" << endl;
    return m_val;
}

// Set the raw value of the fixed point value
void Fixed::setRawBits(int const raw) {
    cout << YELLOW << "setRawBits member function" << RESET << " called" << endl;
    m_val = raw;
}
