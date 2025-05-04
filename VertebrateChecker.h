#ifndef VERTEBRATECHECKER_H
#define VERTEBRATECHECKER_H

#include "SeaChecker.h"
using namespace std;

class VertebrateChecker : public SeaChecker {
public:
    bool check(SeaCreature* c) override {
        if (c->getSpecies() == "Snapper" || c->getSpecies() == "Tailor") {
            return c->getLength() >= 30.0 && !c->hasEggs();
        } else if (c->getSpecies() == "Tarwhine") {
            return c->getLength() >= 20.0 && !c->hasEggs();
        }
        return false;
    }
};

#endif