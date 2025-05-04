#ifndef SEACREATURE_H
#define SEACREATURE_H

#include <string>
using namespace std;

class SeaCreature {
protected:
    string species;
    double length;
    bool carryingEggs;

public:
    SeaCreature(string species, double length, bool carryingEggs)
        : species(species), length(length), carryingEggs(carryingEggs) {}

    virtual string getType() = 0;
    string getSpecies() { return species; }
    double getLength() { return length; }
    bool hasEggs() { return carryingEggs; }

    virtual ~SeaCreature() = default;
};

#endif
