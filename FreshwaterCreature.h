#ifndef FRESHWATERCREATURE_H
#define FRESHWATERCREATURE_H

#include "SeaCreature.h"

class FreshwaterCreature : public SeaCreature {
public:
    FreshwaterCreature(string species, double length, bool carryEggs)
        : SeaCreature(species, length, carryEggs) {}

    string getType() override {
        return "freshwater";
    }
};

#endif