#include "include/File.hpp"

list<string> FileHandler::readFile(char* file) {
    ifstream fin;
    string   line;
    list<string> lines;
    fin.open(file);
    while (getline(fin, line)) {
        lines.push_back(line);
    }
    fin.close();
    return lines;
}

void FileHandler::writeFile(char* file) {
    ofstream fout;
    string   line;
    fout.open(file);
    while (fout) {
        // Call function to get information and write file
    }
    fout.close();
}
