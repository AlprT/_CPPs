#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class WrongAnimal
{
    protected:
        string _type;
    public:
        WrongAnimal();
        WrongAnimal(string const &type);
        WrongAnimal(WrongAnimal const &other);
        virtual ~WrongAnimal();

        WrongAnimal &operator=(WrongAnimal const &other);
        
        string const &getType() const;
        void    setType(string const &type);

        void makeSound() const;
};
