
#include <iostream>
#include <string>
#include <fstream>

using std::string;
using std::cout;
using std::cerr;
using std::endl;

int main(int argc, const char** argv) 
{
    if (argc != 4)
    {
        cerr << "Usage: ./replace <filename> <s1> <s2>" << endl;
        return 1;
    }
    
    string filename = argv[1];
    string s1 = argv[2];
    string s2 = argv[3];
    string fileContent = "";
    string line = "";

    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        cerr << "Error: could not open file" << endl; return 1;
    }
    while (std::getline(inputFile, line))
        fileContent += line + "\n";
    inputFile.close();

    while (fileContent.find(s1) != string::npos)
    {
        size_t a = fileContent.find(s1);
        fileContent.erase(a, s1.length());
        fileContent.insert(a, s2);
    }
    std::ofstream outputFile(filename + ".replace");
    if (!outputFile.is_open()) {
        cerr << "Error: could not open file" << endl; return 1;
    }
    outputFile << fileContent;
    outputFile.close();
}
