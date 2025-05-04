#ifndef SEACREATUREFACTORY_H
#define SEACREATUREFACTORY_H

#include "VertebrateCreature.h"
#include "InvertebrateCreature.h"
using namespace std;

class SeaCreatureFactory {
public:
    static SeaCreature* createCreature(string type, string species, double length, bool eggs) {
        if (type == "vertebrate")
            return new VertebrateCreature(species, length, eggs);
        else if (type == "invertebrate")
            return new InvertebrateCreature(species, length, eggs);
        else
            return nullptr;
    }
};

#endif
