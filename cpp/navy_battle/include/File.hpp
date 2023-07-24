#include <fstream>
#include <iostream>
#include <string>
#include <list>

using namespace std;

class FileHandler {
public:
    list<string> readFile(char* file);
    void writeFile(char* file);

};