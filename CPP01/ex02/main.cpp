#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string &stringREF = str;

    cout << "Address in memory of the string: " << &str << endl;
    cout << "Address in memory of the stringPTR: " << stringPTR << endl;
    cout << "Address in memory of the stringREF: " << &stringREF << endl;
    cout << "String: " << str << endl;
    cout << "StringPTR: " << *stringPTR << endl;
    cout << "StringREF: " << stringREF << endl;
    return (0);
}
