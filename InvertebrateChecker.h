#ifndef INVERTEBRATECHECKER_H
#define INVERTEBRATECHECKER_H

#include "SeaChecker.h"
using namespace std;

class InvertebrateChecker : public SeaChecker {
public:
    bool check(SeaCreature* c) override {
        if (c->getSpecies() == "Crab") {
            return c->getLength() >= 9.3 && !c->hasEggs();
        } else if (c->getSpecies() == "Abalone") {
            return c->getLength() >= 11.7 && !c->hasEggs();
        } else if (c->getSpecies() == "Blue_Swimmer") {
            return c->getLength() >= 6.5 && !c->hasEggs();
        }
        return false;
    }
};

#endif