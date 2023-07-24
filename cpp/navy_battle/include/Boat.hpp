#include <map>
#include <list>

typedef list<char*> BoatPos;
typedef map<int, BoatPos> Boats;

class Boat {
    public:
        void filterBoat(std::string line, Boats &boatMap);
        void getPos(std::string line, char delimiter, std::string &output);
        void getBoat(std::string line, char delimiter, std::string &output);
};