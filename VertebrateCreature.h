#ifndef VERTEBRATECREATURE_H
#define VERTEBRATECREATURE_H

#include "SeaCreature.h"
using namespace std;

class VertebrateCreature : public SeaCreature {
public:
    VertebrateCreature(string species, double length, bool carryingEggs)
        : SeaCreature(species, length, carryingEggs) {}

    string getType() override {
        return "vertebrate";
    }
};

#endif
