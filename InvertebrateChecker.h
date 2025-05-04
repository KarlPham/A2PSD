#ifndef INVERTEBRATECHECKER_H
#define INVERTEBRATECHECKER_H

#include "SeaChecker.h"
using namespace std;

class InvertebrateChecker : public SeaChecker {
public:
    bool check(SeaCreature* c) override {
        if (c->getSpecies() == "Crab") {
            if (c->getLength() < 9.3) return false;
            if (c->hasEggs()) return false;
            return true;
        }
        else if (c->getSpecies() == "Abalone") {
            if (c->getLength() < 11.7) return false;
            if (c->hasEggs()) return false;
            return true;
        }
        else if (c->getSpecies() == "Blue_Swimmer") {
            if (c->getLength() < 6.5) return false;
            if (c->hasEggs()) return false;
            return true;
        }
        return false;
    }
};

#endif
