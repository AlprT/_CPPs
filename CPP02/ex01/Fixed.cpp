
#include "Fixed.hpp"

Fixed::Fixed() : m_val(0) {
    cout << GREEN << "Default constructor" << RESET << " called" << endl;
}

Fixed::~Fixed() {
    cout << RED << "Destructor" << RESET << " called" << endl;
}

Fixed::Fixed(const Fixed &other) {
    cout << GREEN << "Copy constructor" << RESET << " called" << endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
    cout << BLUE << "Copy assignment operator" << RESET << " called" << endl;
    if (this != &other)
        m_val = other.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const { return m_val; }

void Fixed::setRawBits(int const raw) { m_val = raw; }

// it shifts the value to the left by 8, so it multiplies the value by 2^8
// we basicly put the value in the fixed point format
Fixed::Fixed(const int val) : m_val(val << m_frac) {
    cout << GREEN << "Int constructor" << RESET << " called" << endl;
}

// it rounds the value to the nearest integer and shifts the value to the left by 8
// we basicly put the value in the fixed point format by multiplying it by 2^8
Fixed::Fixed(const float val) : m_val(roundf(val * (1 << m_frac))) {
    cout << GREEN << "Float constructor" << RESET << " called" << endl;
}

//we multiply the value by 2^8 to get the fixed point value
//so no matter if the value is an int or a float, program will use them in the same format


// we divide the value by 2^8 to get the original value
float Fixed::toFloat(void) const {
    return (float)m_val / (1 << m_frac);
}

// we shift the value to the right by 8 to get the original value
int Fixed::toInt(void) const {
    return m_val >> m_frac;
}

// we overload the << operator to print the value of the fixed point value
// "out" is actually the cout object of the ostream class
// in operator overload, first parameter is the value of left side of the operator, second parameter is the value of right side of the operator
std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}
// normally operator << means bit shift left, but ostream class overloads this operator to create a stream
// stream basicly means data flow, for example cout << "Hello World" << endl; means insert "Hello World" to the cout stream and then insert a new line
// then we return the stream, which prints the value of all the objects in the stream

// when we will use an object from the Fixed class in the cout stream, this operator overload will be called
// and by overloading the << operator here, we basicly insert the value of the fixed point value to the cout stream.
