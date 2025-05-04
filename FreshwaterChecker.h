#ifndef FRESHWATERCHECKER_H
#define FRESHWATERCHECKER_H

#include "SeaChecker.h"
using namespace std;

class FreshwaterChecker : public SeaChecker {
public:
    bool check(SeaCreature* c) override {
        if (c->getSpecies() == "Brown_Trout") {
            return c->getLength() >= 25.0 && !c->hasEggs();
        } else if (c->getSpecies() == "Golden_Perch") {
            return c->getLength() >= 30.0;
        }
        return false;
    }
};

#endif