#ifndef INVERTEBRATECREATURE_H
#define INVERTEBRATECREATURE_H

#include "SeaCreature.h"

class InvertebrateCreature : public SeaCreature {
public:
    InvertebrateCreature(string species, double length, bool carryEggs)
        : SeaCreature(species, length, carryEggs) {}

    string getType() override {
        return "invertebrate";
    }
};

#endif