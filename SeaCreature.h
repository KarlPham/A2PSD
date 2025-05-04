#ifndef SEACREATURE_H
#define SEACREATURE_H

#include <string>
using namespace std;

class SeaCreature {
protected:
    string species;
    double length;
    bool carryEggs;

public:
    SeaCreature(string species, double length, bool carryEggs)
        : species(species), length(length), carryEggs(carryEggs) {}

    virtual ~SeaCreature() {}

    string getSpecies() { return species; }
    double getLength() { return length; }
    bool hasEggs() { return carryEggs; }

    virtual string getType() = 0;
};

#endif