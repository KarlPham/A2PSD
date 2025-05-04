#ifndef VERTEBRATECHECKER_H
#define VERTEBRATECHECKER_H

#include "SeaChecker.h"
using namespace std;

class VertebrateChecker : public SeaChecker {
public:
    bool check(SeaCreature* c) override {
        if (c->getSpecies() == "Snapper" || c->getSpecies() == "Tailor" ) {
            if (c->getLength() < 30.0) return false;
            if (c->hasEggs()) return false;
            return true;
        }
        else if (c->getSpecies() == "Tarwhine") {
            if (c->getLength() < 20.0) return false;
            if (c->hasEggs()) return false;
            return true;
        }
        return false;
    }
};

#endif
