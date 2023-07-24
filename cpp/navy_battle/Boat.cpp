#include "include/Boat.hpp"
#include <bits/stdc++.h>

void Boat::getPos(std::string line, char delimiter, std::string &output) {
    output = line.substr(1, line.find(delimiter));
}

void Boat::getBoat(std::string line, char delimiter, std::string &output) {
    output = line.substr(0, line.find(delimiter));
}

void Boat::filterBoat(std::string line, Boats &boatMap) {
    BoatPos bp = new BoatPos;
    Boats b = new Boats;
    std::string boatPos;
    std::string boatId;

    getPos(line, ';', boatPos);
    bp.push_back(boatPos);

    getBoat(line, ';', boatId);
    b.insert({boatId, boatPos});

    boatMap = b;
}
