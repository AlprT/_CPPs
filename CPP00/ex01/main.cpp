
#include "phonebook.hpp"

void ft_display() {
    cout << "+----PHONEBOOK-+" << endl;
    cout << "|    1-ADD" << endl;
    cout << "|    2-SEARCH" << endl;
    cout << "|    3-EXIT" << endl;
    cout << "+--------------+" << endl << endl;
    cout << "> ";
}

int ft_input(string cmd, int flag)
{
    if (!flag && (cmd == "ADD" || cmd == "add" || cmd == "1"))
        return 1;
    else if (flag && (cmd == "SEARCH" || cmd == "search" || cmd == "2"))
        return 1;
    else if (flag == 2 && (cmd == "EXIT" || cmd == "exit" || cmd == "3"))
        return 1;
    return 0;
}

int main()
{
    Phonebook Phonebook;
    string cmd;

    cout << endl;
    while (1)
    {
        ft_display();
        getline(cin, cmd);
        cout << endl;
        if (ft_input(cmd, 0))
            Phonebook.ft_add();
        else if (ft_input(cmd, 1))
            Phonebook.ft_search();
        else if (ft_input(cmd, 2)) {
            system("clear");
            cout << "\nGOOD BYE \n" << endl;
            cin.get();
            break;
        }
        else { 
            cout << "COMMAND NOT FOUND" << endl;
            cin.get();
        }
        system("clear");
    }
}
