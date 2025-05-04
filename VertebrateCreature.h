#ifndef VERTEBRATECREATURE_H
#define VERTEBRATECREATURE_H

#include "SeaCreature.h"

class VertebrateCreature : public SeaCreature {
public:
    VertebrateCreature(string species, double length, bool carryEggs)
        : SeaCreature(species, length, carryEggs) {}

    string getType() override {
        return "vertebrate";
    }
};

#endif