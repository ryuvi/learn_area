#include "include/Game.hpp"
#include "include/defines.hpp"
#include "include/Player.hpp"
#include "include/Boat.hpp"
#include "include/Checker.hpp"
#include "include/File.hpp"

int main(int argc, char* argv[])
{
    FileHandler handler;

    char* p1 = "jogador1.txt";
    char* p2 = "jogador2.txt";
    
    std::list<std::string> file_line1;
    std::list<std::string> file_line2;

    file_line1 = handler.readFile(p1);
    file_line2 = handler.readFile(p2);

    return 0;
}
