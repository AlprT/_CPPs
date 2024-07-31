
#include "Harl.hpp"

Harl::Harl() {
    cout << "Harl arrived at your shop. Good Luck." << endl << endl;
}

Harl::~Harl() {
    cout << endl << "Harl finally left your shop. Thanks to god." << endl;
}

void    Harl::m_debug(void) {
    cout << MAGENTA << "[DEBUG] : " << DEFAULT << endl;
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void    Harl::m_info(void) {
    cout << GRAY << "[INFO] : " << DEFAULT << endl;
    cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
    cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!." << endl;
}

void    Harl::m_warning(void) {
    cout << YELLOW << "[WARNING] : " << DEFAULT << endl;
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
    cout << "years whereas you started working here since last month." << endl;
}

void    Harl::m_error(void) {
    cout << RED << "[ERROR] : " << DEFAULT << endl;
    cout << "This is unacceptable. I want to speak to the manager NOW!. I want a free meal." << endl;
}

void    Harl::complain(string level) {
    void (Harl::*complaints[])() = {&Harl::m_debug, &Harl::m_info, &Harl::m_warning, &Harl::m_error};
    string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i;
    for (i = 0; i < 4; i++) {
        if (level == levels[i])
            break;
    }
    switch (i)
    {
        case 0:
            (this->*complaints[0])();
        case 1:
            (this->*complaints[1])();
        case 2:
            (this->*complaints[2])();
        case 3:
            (this->*complaints[3])();
            break;
        default:
            cout << "[ Probably complaining about insignificant problems ]" << endl;
            break;
    }
}
