#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Animal
{
    protected:
        string _type;
    public:
        Animal();
        Animal(Animal const &other);
        virtual ~Animal();

        Animal &operator=(Animal const &other);
        
        string const &getType() const;
        void    setType(string const &type);

        virtual void makeSound() const = 0;
};
