#ifndef INVERTEBRATECREATURE_H
#define INVERTEBRATECREATURE_H

#include "SeaCreature.h"
using namespace std;

class InvertebrateCreature : public SeaCreature {
public:
    InvertebrateCreature(string species, double length, bool carryingEggs)
        : SeaCreature(species, length, carryingEggs) {}

    string getType() override {
        return "invertebrate";
    }
};

#endif
